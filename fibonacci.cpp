#include <iostream>
using namespace std;

// membuat fungsi fibbonaci
int bil_fib(int n) {
    
    // jika input nilai n bernilai 1 atau 0 maka akan di kembalikan sesuai inputan
  if (n == 0 || n == 1){
    return n;
    
    // jika input nilai tidak sama dengan 0 atau 1 makan akan di compile sesuai rumus di bawah
  } else {
    return (bil_fib(n-1) + bil_fib(n-2));
  }
}


int main() {
  // deklasrasi variabel
  int n, i, f = 0;
  
  // inputan nilai
    cout<<"Masukan Deret Bilangan Fibonacci : ";cin>>n;
    
    // Mencetak ke layar hasil compilasi
  cout << "Deret Bilangan Fibonacci: " ;
  
  
  // melakuakn looping terhadap nilai yang kita inputkan
  for (i = 1; i <= n; i++){
    cout << bil_fib(f) << " ";
    f++;
  }
  
  // pesan developer
  cout << " "<<endl;
  cout << "\ndevelop @mahendrarendi";
  
  return 0;
}
