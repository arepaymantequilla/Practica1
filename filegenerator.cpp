#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct personas{
    string nombre;
    string correo;
    int cedula;
}p;
int main(){
    int personas;
    ofstream output("C:/Programacion/GitPrograms/Practica1/Data/data.txt");

    if (!output.is_open()){
        cout<<"No se puede abrir ni crear el archivo";
        return 1;
    }

    cout<<"Cuantas personas desea agregar? ";
    cin>>personas;
    cin.ignore();

    for(int i =0; i<personas; i++){
        cout<<"Ingrese el nombre de la persona "<<i+1<<endl;
        getline(cin, p.nombre);
        cout<<"Ingrese el correo de la persona "<<i+1<<endl;
        getline(cin, p.correo);
        cout<<"Ingrese la cedula de la persona "<<i+1<<endl;
        cin>>p.cedula;
        cin.ignore();
        output<<p.nombre<<" "<<p.cedula<<" "<<p.correo<<endl;
    }
    output.close();

    ifstream input("C:/Programacion/GitPrograms/Practica1/Data/data.txt");
    if(!input.is_open()){
        cout<<"No se pudo abrir el archivo";
        return 1;
    }

    while(input >> p.nombre >> p.cedula >> p.correo ){
        cout<< "Mi nombre es "<<p.nombre<<","<<" numero de cedula: "<<p.cedula<<", "<<"mi correo es: "<<p.correo<<endl;
    }
    input.close();
    return 0;

}