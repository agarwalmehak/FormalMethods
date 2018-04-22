int main() {
	int k=500;    
  	for(int i =0;i<10;i++){
   		
		if(k==506){
			k=k-(i-1);
			i=i-2;		
		}else{
			k=k+i;		
		}
  	}
  
  return 0;
}

