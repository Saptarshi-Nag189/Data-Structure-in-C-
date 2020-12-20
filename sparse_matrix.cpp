#include <iostream>
using namespace std;
#define MAX 20
void printsparse(int b[MAX][3]);
void readsparse(int b[MAX][3]);
void addsparse(int b1[MAX][3], int b2[MAX][3], int b3[MAX][3]);
void transpose(int s[][3], int T[][3]);
int main(void)
{

    int b1[MAX][3], b2[MAX][3], b3[MAX][3], T[MAX][3];
    readsparse(b1);
    readsparse(b2);
    addsparse(b1, b2, b3);
    printsparse(b3);
    transpose(b1, T);
    printsparse(T);
}
void readsparse(int b[MAX][3])
{

    int i, t, m, n;
    cout << "Enter no. of rows and columns:" << endl;
    cin >> m >> n;
    cout << "No. of non-zero triples:" << endl;
    cin >> t;
    b[0][0] = m;
    b[0][1] = n;
    b[0][2] = t;
    for (i = 1; i <= t; i++)
    {
        cout << "Enter the triples(row,column,value):" << endl;
        cin >> b[i][0] >> b[i][1] >> b[i][2];
    }
}
void addsparse(int b1[MAX][3], int b2[MAX][3], int b3[MAX][3])
{
    int t1, t2, i, j, k;
    if (b1[0][0] != b2[0][0] || b1[0][1] != b2[0][1])
    {
        cout << "You have entered invalid matrix!!Size must be equal";
        exit(0);
    }

    t1 = b1[0][2];
    t2 = b2[0][2];
    i = j = k = 0;
    b3[0][0] = b1[0][0];
    b3[0][1] = b1[0][1];

    while (i <= t1 && j <= t2)
    {
        if (b1[i][0] < b2[j][0])
        //row numbers are not equal
        {
            b3[k][0] = b1[i][0];
            b3[k][1] = b1[i][1];
            b3[k][2] = b1[i][2];
            k++;
            i++;
        }

        else if (b2[j][0] < b1[i][0])
        //row numbers are not equal
        {

            b3[k][0] = b2[j][0];
            b3[k][1] = b2[j][1];
            b3[k][2] = b2[j][2];
            k++;
            j++;
        }

        else if (b1[i][1] < b2[j][1])
        //row numbers are equal, compare column
        {
            b3[k][0] = b1[i][0];
            b3[k][1] = b1[i][1];
            b3[k][2] = b1[i][2];
            k++;
            i++;
        }

        else if (b2[j][1] < b1[i][1])
        //row numbers are equal, compare column
        {
            b3[k][0] = b2[j][0];
            b3[k][1] = b2[j][1];
            b3[k][2] = b2[j][2];
            k++;
            j++;
        }

        else
        {
            b3[k][0] = b1[i][0];
            //row and column numbers are equal
            b3[k][1] = b1[i][1];
            b3[k][2] = b1[i][2] + b2[j][2];
            k++;
            i++;
            j++;
        }
    }

    while (i <= t1)
    //copy remaining terms from b1
    {
        b3[k][0] = b1[i][0];
        b3[k][1] = b1[i][1];
        b3[k][2] = b1[i][2];
        i++;
        k++;
    }
    while (j <= t2) //copy remaining terms from b2
    {
        b3[k][0] = b2[j][0];
        b3[k][1] = b1[j][1];
        b3[k][2] = b1[j][2];
        j++;
        k++;
    }

    b3[0][2] = k - 1; //set numberof terms in b3
}
void printsparse(int b[MAX][3])
{
    int i, t;
    t = b[0][2];
    cout << "row\tcolumn\tvalue" << endl;
    for (i = 1; i <= t; i++)
    {
        cout << b[i][0] << "\t" << b[i][1] << "\t" << b[i][2];
        cout << endl;
    }
}
void transpose(int s[][3], int T[][3])
{
    T[0][0] = s[0][1];
    T[0][1] = s[0][0];
    T[0][2] = s[0][2];
    int k = 1;
    for (int i = 0; i < s[0][1]; i++)
    {
        for (int j = 0; j < s[0][2]; j++)
        {
            if (i == s[j][1])
            {
                T[k][0] = s[j][1];
                T[k][1] = s[j][0];
                T[k][2] = s[j][2];
                k++;
            }
        }
    }
}