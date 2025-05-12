#include<iostream>
using namespace std;

int main(){
	
	int VECTOR [5]={1,3,5,7,9};
	
	for(int i=0;i<5;i++){
	

	
	cout<< VECTOR[i] *2<<endl;
	
	} 
	int opcion;
	cout<<"elija el numero que quiere modificar "<<endl;
	cin>>opcion;
	
	int NV;
	switch(opcion){
	 case 1: 
	 	cout<<"igrese el nuevo valor";
	 	cin>>NV;
	 	VECTOR[0] = NV;
	 	
	 	
	 	break;
	 	
	  case 2:
	  	
	 	cout<<"igrese el nuevo valor";
	 	cin>>NV;
	 	VECTOR[1] = NV;
	    break;
	 
	  case 3:
	  	
	 	cout<<"igrese el nuevo valor";
	 	cin>>NV;
	 	VECTOR[2] = NV;
	    break;
	       
	  case 4:
	 	cout<<"igrese el nuevo valor";
	 	cin>>NV;
	 	VECTOR[3] = NV;
	    break;
	    
	     case 5:
	  	
	 	cout<<"igrese el nuevo valor";
	 	cin>>NV;
	 	VECTOR[4] = NV;
	    break;
	    
	
	}
	
	 cout<<"verifique su valor"<<endl;
	 
	for(int j=0;j<5;j++ ){
	cout<< VECTOR[j]<<endl;
}
 cout << "Se borrarán los elementos con valor 0" << endl;

    int AUX[5];
	int V = 0;
    for(int K = 0; K < 5; K++){
        if(VECTOR[K] != 0){
            AUX[V] = VECTOR[K];
            V++;
        }
    }

    cout << "Valores después de eliminar los ceros:" << endl;
    for(int r = 0; r < V; r++){
        cout << AUX[r] << endl;
    }
	return 0;
}
