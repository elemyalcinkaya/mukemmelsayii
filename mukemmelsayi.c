# include<stdio.h>
int main(){
	int sayi,count,sum;
	sum=0;
	scanf("%d",&sayi);
	for(count=1;count<sayi;count++){
		if(sayi%count==0){
			sum=sum+count;
		}
		else{
			sum=sum;
		}
	}
	if(sum==sayi){
		printf("%d mukemmel sayi",sayi);
	}
	else{
		printf("%d mukemmel sayi degil",sayi);
	}
	
	return 0;
}
