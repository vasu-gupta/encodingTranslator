//
//  printdata.cpp
//  EncodingTranslator
//
//  Created by 장한빈 on 2018. 7. 30..
//  Copyright © 2018년 장한빈. All rights reserved.
//

#include "printdata.hpp"
#include <fstream>
#include <iomanip>

using namespace std;

void printLine()
{
    cout<<"-----------------------------------------------"<<endl;
}

void printByHexData(u_int8_t *printArr, int length)
{
    
    for(int i=0;i<length;i++)
    {
        if(i%16==0)
            cout<<endl;
        cout<<setfill('0');
        cout<<setw(2)<<hex<<(int)printArr[i]<<" ";
        
    }
    
    cout<<dec<<endl;
    printLine();
}

void printByMAC(u_int8_t *printArr,int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<setfill('0');
        cout<<setw(2)<<hex<<(int)printArr[i];
        if(i!=5)
            cout<<":";
        
    }
    cout<<setfill(' ');
    cout<<dec;
    
}
