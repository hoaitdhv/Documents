#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	cout << "Chuong trinh choi game doan so!\n";
	srand(time(NULL));
	while(true)
	{
		int somay = 1+rand()%100;
	    int solandoan=0;
	    
	    cout<< "Moi ban doan so : ";
	    do{
	    int songuoichoi;
	    cin >> songuoichoi;
	    solandoan++;
	    cout<<"So lan doan cua ban la: "<<solandoan<<endl;
	    if(songuoichoi==somay)
	    {
		    cout<< "WINER!, CAM ON BAN DA CHOI GAME"<<endl;
		   break;
	    }
	    else if(songuoichoi<somay)
	    {
		   cout << "Ban da doan sai, so ban doan < so may"<<endl;
	    }    else 
	    {
		    cout << "Ban da doan sai, so ban doan > so may"<<endl;
	    }
	    if(solandoan==7){
		    cout<<"GAME OVER!- CHUC BAN MAY MAN LAN SAU"<<endl;
		    cout<<"So cua may la :"<<somay<<endl;
		    break;
		}
        }while(true);
        cout<<"Ban co muon tiep tuc khong ? (c/k):";
            char c;
            cin>>c;
            if(c=='k'|| c=='K')
            {
		       break;
		    }
	}
	cout << "GOODBYE!, CAM ON BAN DA CHOI GAME DOAN SO";
   return 0;
}

