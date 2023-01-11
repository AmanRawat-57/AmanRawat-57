# include<stdio.h>
void main(){
    int m,n,i,j,flag=1;
    printf("enter the number of row and column:> ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter the value:> ");
            scanf("%d",&a[i][j]);
        if(i==j&&[i][j]!=0)
        	flag=0;
        else if(i!=j&&a[i][j]!=0)
        		flag=0;
		       }
    }
    printf("the created matrix is:> \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                printf("%d ",a[j][i]);
        }
        printf("\n");
    }
	if (flag)
					printf("it is an identity matrix \n");
	else
		printf("it is not an identity matrix \n");
}
		
