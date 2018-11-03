# LATIHAN01

MENCARI BILANGAN TERBESAR DARI 3 VARIABEL
    
Algoritma : menentukan bilangan terbesar

 {mencari bilangan terbesar dari 3 bilangan yang diinput}
            
Deklarasi
                
 Integer a,b,c,terbesar;
                
Deskripsi 

                Write(“Masukkan Bilangan Pertama : ”);
                
                Read(a);
                
                Write(“Masukkan Bilangan Kedua : ”);
                
                Read(b);
                
                Write(“Masukkan Bilangan Ketiga : ”);
                
                Read(c);
                
                if (a>b) then
                
                            if (a>c)
                            
                                        then write(“Terbesar = ”,a);
                                        
                                        else wrie(“Terbesar = ”,c);
                                        
                            endif
                            
                else if (b>c)
                
                            then write(“Terbesar = ”,b);
                            
                            else write(“Terbesar = ”,c);
                            
                endif
                
                endif
                
# Program C++

#include <iostream>

using namespace std;

int main()

{
    int  A,B,C;
    
    cout << "Masukan bilangan 1:";
    
	cin >> A;

	cout << "Masukan bilangan 2:";
  
	cin >> B;

	cout << "Masukan bilangan 3:";
  
	cin >> C;

	if (A > B) {
  
		if (A > C)
    
			cout << "Bilangan terbesar adalah:" << A;
      
		else
    
			cout << "Bilangan terbesar adalah:" << C;
      
	    } else {
      
		if (B > C)
    
			cout << "Bilangan terbesar adalah:" << B;
      
		else
    
			cout << "Bilangan terbesar adalah:" << C;
      
        }
        
}

# Foto Hasil


# LATIHAN02

MENCARI BILANGAN TERBESAR DAN TERKECIL DARI 4 VARIABEL

Deskripsi

1. Mendeklarasikan variabel n,nilai sebagai variabel input

2. Mendeklarasikan variabel i sebagai pembatas inputan/perulangan 

3. Mendeklarasikan max sebagai nilai terbesar dan min nilai terkecil

4. Menginputkan nilai n dimana menunjukan banyak angka yang akan di input

5. menginputkan nilai nilai yang akan di bandingkan

# Program C++

#include <iostream>
	
using namespace std;

int main()

{
    int i,n,max,min,nilai;
    
    cout<<"===Menentukan Bilangan Terbesar & Terkecil==="<< endl;
    
    cout<<"Masukan Banyak Bilangan:";
    
    cin>> n;
    
    cout<<"Masukan Nilai ke =";
    
    cin>> nilai;
    
    max=nilai;
    
    min=nilai;
    
    for(i=2;i<=n;i++)
    
    {
        cout<<"Masukan Nilai Ke"<<i<<"=";
	
        cin>>nilai;
	
        if (nilai>max) max=nilai;
	
        if (nilai<min) min=nilai;
	
    }
    
    cout<<"Nilai Terbesar Adalah:" <<max<<"\nNilai Terkecil Adalah:"<<min;
    
    return 0;
    
}

# Foto Hasil

![img](https://raw.githubusercontent.com/arifhanifanudin/praktikum02/master/hasil.PNG)







