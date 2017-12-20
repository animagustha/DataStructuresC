/* 
 * File:   main.c
 * Author: haseeb
 *
 * Created on December 17, 2017, 8:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
    int j, i=j-1, key;
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(a)/sizeof(int);
    // printf("%d",j);
    for(j=1;j<size;j++)
    {
        key = a[j];
        i = j-1;
        while(i>-1 && a[i]>key)
        {
            a[i+1] = a[i];
            i = i-1;
        }
        a[i+1] = key;
    }
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}

