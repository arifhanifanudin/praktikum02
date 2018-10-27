# LATIHAN01

    MENCARI BILANGAN TERBESAR DARI 3 BILANGAN
    
Algoritma : menentukan_bilangan_terbesar

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

