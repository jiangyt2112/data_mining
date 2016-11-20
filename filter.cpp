#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAXN = 100000000;
//all use a temporary tow-dimensional array
int data[MAXN][MAXN];//the whole data without the first line
//row 15:SUM_YR_1,row16:SUM_YR_2,29:AVG_DISCOUNT,17:SEG_KM_SUM
int filter_data(datafile){
	int index_15 = datafile[15];
	int index_16 = datafile[16],
	int index_17 = datafile[17],
	int index_29 = datafile[29],
	int filterflag = 1;
	if(!isdigit(index_15)||!isdigit(index_16)) filterflag = 0;
	if(index_15==0&&index_16==0)
		if(index_17>0&&index_29!=0)
		filterflag = 0;
	return filterflag;
}

int main(){
	int filterflag;
	for(int i=0;i<end;i++)
	{
		filterflag = filter_data(data[i]);
		if (filterflag==0)
		{
			for(int j=i;j<end;j++) data[j] = data[j+1];//delete line too complicated in delete ,consider the linked list
		}
	}
	freopen("filtered.dat","w",data);
	return 0;
}
