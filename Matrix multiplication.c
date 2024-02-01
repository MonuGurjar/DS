#include <stdio.h>
int main(){
    printf("Enter first matrix Rows and Columns\n");    
    int n,m,o,p;
    printf("Enter Rows : ");
    scanf("%d",&n);
    printf("Enter Columns : ");
    scanf("%d",&m);
    printf("Enter second matrix Rows and Columns \n");
    printf("Enter Rows : ");
    scanf("%d",&o);
    printf("Enter Coulumns : ");
    scanf("%d",&p);
    
    
    if (m==o){
        printf("Enter first matrix elements :\n");
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("Enter the %d,%d element of matrix : ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n");
        printf("\n");
        printf("Enter second matrix elements :\n");
        int b[o][p];
        for(int i=0;i<o;i++){
            for(int j=0;j<p;j++){
                printf("Enter the %d,%d element of matrix : ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
        }
        printf("\n");
        printf("\n");
        
        printf("First Matrix \n");
        for(int i=0;i<n;i++){
            printf("\n");
            for(int j=0;j<m;j++){
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
        printf("\n");
        printf("Second Matrix \n");
        for(int i=0;i<o;i++){
            printf("\n");
            for(int j=0;j<p;j++){
                printf("%d\t",b[i][j]);
            }
        }
        printf("\n");
        printf("\n");
        int c[n][p];
        for(int i=0;i<n;i++){
            printf("\n");
            for(int j=0;j<p;j++){
                printf("\n");
                c[n][p]=0;
                for (int k=0;k<m;k++ ){
                    
                
                    c[n][p] += a[i][k] * b[k][j];
                }
            }
        }
        printf("Multiplication of Given Matrices \n");
        for(int i=0;i<n;i++){
            printf("\n");
            for(int j=0;j<p;j++){
                printf("%d\t",c[n][p]);
            } 
        }
    }

    else{
        printf("Number of columns of first matrix are not equal to number of Rows of second matrix !!!\n\n");
        printf("Multiplication not possible !!! ");
    }
    
    
    printf("\n\n");
}