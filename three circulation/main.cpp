//
//  main.cpp
//  three circulation
//
//  Created by  黄磊 on 15/12/9.
//  Copyright © 2015年  黄磊. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i,j,k;
    printf("\n");
    for(i=1;i<5;i++)
        for(j=1;j<5;j++)
            for(k=1;k<5;k++)
            {
                if(i!=j&&i!=k&&j!=k)
                    printf("%d,%d,%d\n",i,j,k);
            }
    return 0;
}
