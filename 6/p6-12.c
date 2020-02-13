//创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，存储在3行3列矩阵c中。??
/*将4行3列矩阵a和b的和存储在c中*/
void mat_add(const int a[4][3], const int b[3][4] , int c[3][3])
{
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for(int m = i; m < 4; m++)
            {
                for(int n = 0; n < 3; n++)
                {
                    c[i][j] = a[m][n] + b[n][m];
                }
            }
        }
            
    }
        
}
