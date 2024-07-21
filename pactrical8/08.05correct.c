#include <stdio.h>

int ascending(int[]);

int descending(int[]);

int main()
{
    int x[] = {3, 2, 4, 5, 6, 4, 9, 7, 8, 1};
    int n;
	 printf("\n X[10] = {");
    for(n=0; n<10; n++){
        printf(" %d ",x[n]);

    }
    printf("}\n");

    ascending(x);

    printf("\n Ascending order  = {");

    for(n=0; n<10; n++){
        printf(" %d ",x[n]);
    }
    printf("}\n");

    descending(x);

    printf("\n Descending order = {");

    for(n=0; n<10; n++){

        printf(" %d ",x[n]);

    }

    printf("}\n\n");

}

int ascending(int y[])

{

    int n, z = 0, c = 0;
    
    for(n=0; n<10; n++){
        for(z=n+1; z<10; z++){
            if(y[n] > y[z]){//y[o]>y[1]
                c = y[n];
                y[n] = y[z];
                y[z] = c;
            }
        }
    }
    return y[z];
}
int descending(int p[])
{
    int n, z = 0, m = 0;
    for(n=0; n<10; n++){
        for(z=n+1; z<10; z++){
            if(p[n] < p[z]){
                m = p[n];
                p[n] = p[z];
                p[z] = m;
            }
        }
    }

    return p[z];
}
