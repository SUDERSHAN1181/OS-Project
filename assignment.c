#include<stdio.h>
int main()
{

    int n, m, i, j, k;
    n = 5;
    m = 3;
    int at[5][3] = { { 0, 1, 0 },
                        { 2, 0, 0 },
                        { 3, 0, 2 },
                        { 2, 1, 1 },
                        { 0, 0, 2 } },
	max[5][3] = { { 7, 5, 3 },
                      { 3, 2, 2 },
                      { 9, 0, 2 },
                      { 2, 2, 2 },
                      { 4, 3, 3 } },
	avail[3] = { 3, 3, 2 },f[5]={0}, value[n], index = 0,req[n][m],y=0;
    for (i = 0; i < n; i++)
	 {
        for (j = 0; j < m; j++)
            req[i][j] = max[i][j] - at[i][j];
    	}
    for (i = 0; i < 5; i++)
	 {
        for (j = 0; j < n; j++)
		 {
        	    if (f[j] == 0)
		   {

                   		 int c = 0;
                for (k = 0; k < m; k++)
		 {
                    if (req[j][k] > avail[k])
		    {
                        c = 1;
                         break;
                    }
                }

                if (c == 0)
		 {
                    value[index++] = j;
                    for (y = 0; y < m; y++)
                        avail[y] += at[j][y];
                    f[j] = 1;
                 }
              }
        }
    }

    printf("In SAFE Sequence \nSequence is:-\n");
    for (i = 0; i < n; i++)
        printf(" P%d\n", value[i]);
  }
