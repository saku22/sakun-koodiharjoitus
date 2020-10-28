// kommenttia yhdellä rivillä

/*
pitkää kommenttia
on meinaa
*/

#include <iostream>

using namespace std;

int main()
{
   cout << "Hello World" 
        << endl;          //terminaalikirjoitus
    
    int ika = 16;
    cout << ika
         << endl;
         
    const float pii = 3.141592;
    double pallon_sade, pallon_ala, pallon_tilavuus;

    int luku;
    cout <<"anna sade: " << endl;
    cin >> luku;

    pallon_sade=luku;
    pallon_ala=4*pii*pallon_sade*pallon_sade;
    pallon_tilavuus=(pallon_ala*pallon_sade)/3;

    cout<<pallon_tilavuus<< endl;

    int alueen_leveys=15;
    int alueen_pituus=35;

    int laatta_leveys=5;
    int laatta_pituus=8;      //LASKUJA

    cout << (alueen_leveys/laatta_leveys)*(alueen_pituus/laatta_pituus)<<endl;

    cout << "leveys jakojäännös: "<<alueen_leveys%laatta_leveys<<endl;

    cout << "leveys jakojäännös: "<<alueen_pituus%laatta_pituus<<endl;

    string autoja[]={"BMW" , "Audi" , "Toyota" , "Nissan" , "Ford" , ""};  

    cout << autoja[0]<< endl;

    autoja[1]="Saab";  

    cout << autoja[1]<< endl;  

    autoja[5]="Volvo";  

    cout << autoja[5];  

    if(ika==16){  
    {cout<<"Olet 16 vuotias";  
    }  

    if(ika<16){ 
    }  
    cout << "olen nuorempi kuin 16";
    }  
    
    if (ika>16){  
    }  
    cout << "olen vanhempi kuin 16";  
    }  

    if(ika != 16){  
      cout << "et ole 16";  
    }  
    if else (ika == 16){  
      cout << "olet 16"  

}
