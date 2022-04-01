#include <iostream>
#include <stdlib.h> // Untuk bisa menggunakan fungsi clear pada terminal
using namespace std;

int main(){ 
    // Deklarasi variabel yang diperlukan
    int a = 0, tanya; // a untuk indikator perulangan
    int *A, *B, *C;

    // Perulangan agar bisa menghitung kembali 
    while (a == 0)
    {
        // Deklarasi Array 2 dimensi dengan ordo 3x3 
        int a[3][3]; 
        int b[3][3];
        int c[3][3];

        cout << "============================================="<< endl;
        cout<<"======= Program Perkalian Matriks 3x3 ======="<<endl;
        cout << "============================================="<< endl;

        // Terdapat perulangan bersarang untuk menginput nilai elemen pada matriks A
        cout<<"\n                  MATRIKS A"<<endl;
        for(int i=0;i<3;i++) // Perulangan untuk membuat baris
        {
            for(int j=0;j<3;j++) // perulangan untuk membuat kolom
            {
                cout<<"Masukkan nilai elemen untuk baris "<<i + 1<<" kolom "<<j + 1<<" : ";cin>>a[i][j]; 
            }
            cout<<endl;
        }
    
        // Terdapat perulangan bersarang untuk menginput nilai elemen pada matriks B
        cout<<"\n                 MATRIKS B"<<endl;
        for(int i=0;i<3;i++) // Perulangan untuk membuat baris
        {
            for(int j=0;j<3;j++) // Perulangan untuk membuat kolom
            {
                cout<<"Masukkan nilai elemen untuk baris "<<i + 1<<" kolom "<<j + 1<<" : ";cin>>b[i][j]; 
            }
            cout<<endl;
        }
    
        // Untuk convert elemen dari matriks A ke dalam bentuk pointer
        int ** A = (int **) malloc(sizeof (int *) * 3);
        for (int i = 0; i < 3; i++)
            A[i] = (int*) malloc(sizeof (int) * 3);

        // Untuk convert elemen dari matriks B ke dalam bentuk pointer
        int ** B = (int **) malloc(sizeof (int *) * 3);
        for (int i = 0; i < 3; i++)
            B[i] = (int*) malloc(sizeof (int) * 3);

        // Untuk convert elemen dari hasil perkalian matriks A dan B ke dalam bentuk pointer
        int ** C = (int **) malloc(sizeof (int *) * 3);
        for (int i = 0; i < 3; i++)
            C[i] = (int*) malloc(sizeof (int) * 3);

        system("cls"); // Untuk membersihkan terminal

        // Untuk menampilkan bentuk matriks A yang telah diisi tadi
        cout<<"MATRIKS A "<<endl;
        for (int i = 0; i < 3; i++)
        {
            cout <<"[";
            for (int j = 0; j < 3; j++)
            {
                A[i][j] = a[i][j];
                cout<<(" %f ", A[i][j]) << " ";
            }
            cout<<"]" << endl;
        }

        cout<<endl<<"   X"<<endl;
    
        // Untuk menampilkan bentuk matriks B yang telah diisi tadi
        cout<<"\nMATRIKS B "<<endl;
        for (int i = 0; i < 3; i++)
        {
            cout <<"[";
            for (int j = 0; j < 3; j++)
            {
                B[i][j] = b[i][j];
                cout<<(" %f ", B[i][j]) << " ";
            }
            cout<<"]"<< endl;
        }
    
        // Untuk menampilkan bentuk perkalian  matriks A dan B
        cout<<"\n    =\n"<<endl;
        cout<<"MATRIKS A.B"<<endl;
        for(int i=0;i<3;i++){
            cout<<"[";  
            for(int j=0;j<3;j++){
                c[i][j] = A[i][j]*B[i][j]; 
                C[i][j] = c[i][j];
                cout<<C[i][j]<<" "; 
            }
            cout<< "]" <<endl;
        }

        cout<<"\nApakah anda ingin menghitung kembali ? (1 untuk ya / 2 untuk tidak) : ";
        cin>>tanya; // user akan ditanya apakah ingin menghitung kembali


        if (tanya==1) // untuk menghitung kembali
        {
            int a = 0;
            system("cls");
        } else if (tanya==2) // untuk exit dari program
        {
            int a = 1;
            system("cls");
            cout<<"=======================================================================" << endl;
            cout << "Terimakasih telah menggunakan program ini :) Semoga harimu menyenangkan" << endl;
            cout<<"=======================================================================" << endl;
            break;
        } else // untuk kesalahan dalam memilih
        {
            cout<<"Maaf, pilihan yang anda masukkan salah\n"<<"\nProgram akan berhenti\n" << endl;
            int a = 1;
            break;
        }
    }
}