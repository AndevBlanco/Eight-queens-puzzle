#include<iostream>
using namespace std;
int main()
{
	int Tablero[50][50];
	int Fila;
	int Columna;
	int Proceso;
	int Resta=0;
	int Contador=0;
	int e,f,g,h,i,j,l,k;
	Proceso=0;
	for(int a=0;a<8;a++)
	{
		for(int b=0;b<8;b++)
		{
			Tablero[a][b]=1;
		}
	}
	cout<<"Bienvenido a mi programa, te dare las instrucciones para jugarlo: "<<endl;
	cout<<"1. Tienes que digitar la posicion de la reina, los valores comienzan de 1 a 8 ya que el tablero de ajedrez es de 8 x 8"<<endl;
	cout<<"2. Las posiciones anuladas se marcan con un 0"<<endl;
	cout<<"3. Las posiciones no anuladas se marcan con un 1"<<endl;
	cout<<"4. Las posiciones donde estan las reinas se marcan con un 2"<<endl;
	cout<<"¡DIVIERTETE!"<<endl;
	while(Proceso<8)
	{
		cout<<"Ingrese la posicion de la reina "<<Proceso+1<<endl;
		cout<<"Ingrese la Fila: "<<endl;
		cin>>Fila;
		cout<<"Ingrese la Columna: "<<endl;
		cin>>Columna;
		Fila-=1;
		Columna-=1;
		if(Fila<0 || Columna<0 || Columna>=8 || Fila>=8)
		{
			cout<<"Valor no valido..."<<endl;
			Proceso--;
		}
		else
		{
			if(Tablero[Fila][Columna]!=0 && Tablero[Fila][Columna]!=2)
			{
				Tablero[Fila][Columna]=2;
				for(int c=0;c<8;c++)
				{
					if(Tablero[Fila][c]!=2)
					{
						Tablero[Fila][c]=0;
					}
				}
				for(int d=0;d<8;d++)
				{
					if(Tablero[d][Columna]!=2)
					{
						Tablero[d][Columna]=0;
					}
				}
				f=0;
				for(e=Columna;e<8;e++)
				{
					if(Tablero[Fila+f][e]!=2)
					{
						Tablero[Fila+f][e]=0;
					}
					f++;
				}
				h=0;
				for(g=Columna;g<8;g++)
				{
					if(Tablero[Fila-h][g]!=2)
					{
						Tablero[Fila-h][g]=0;
					}
					h++;
				}
				j=0;
				for(i=Columna;i>=0;i--)
				{
					if(Tablero[Fila-j][i]!=2)
					{
						Tablero[Fila-j][i]=0;
					}
					j++;
				}
				l=0;
				for(k=Columna;k>=0;k--)
				{
					if(Tablero[Fila+l][k]!=2)
					{
						Tablero[Fila+l][k]=0;
					}
					l++;
				}
				for(int v=0;v<8;v++)
				{
					for(int n=0;n<8;n++)
					{
						cout<<" "<<Tablero[v][n]<<"  ";
					}
					cout<<endl;
					cout<<endl;
				}
			}
			else
			{
				cout<<"Valor no valido..."<<endl;
				cout<<"Debes posicionar la reina en la posicion donde haya un 1..."<<endl;
				cout<<endl;
				Proceso--;
				for(int v=0;v<8;v++)
				{
					for(int n=0;n<8;n++)
					{
						cout<<" "<<Tablero[v][n]<<"  ";
					}
					cout<<endl;
					cout<<endl;
				}
			}
		}
		Proceso++;
	}
	cout<<"Terminaste el juego de las ocho reinas..."<<endl;
	for(int v=0;v<8;v++)
	{
		for(int n=0;n<8;n++)
		{
			cout<<Tablero[v][n]<<"  ";
		}
		cout<<endl;
	}
	int n,p=0;
	char Final[11][24];
	char Palabra[14];
	Palabra[0]='F';
	Palabra[1]='E';
	Palabra[2]='L';
	Palabra[3]='I';
	Palabra[4]='C';
	Palabra[5]='I';
	Palabra[6]='T';
	Palabra[7]='A';
	Palabra[8]='C';
	Palabra[9]='I';
	Palabra[10]='O';
	Palabra[11]='N';
	Palabra[12]='E';
	Palabra[13]='S';
	for(int y=5;y<19;y++)
	{
		n=5;
		Final[n][y]='n';
	}
 	for(int v=0;v<11;v++)
	{
		for(int n=0;n<24;n++)
		{
			if(Final[v][n]!='n')
			{
				Final[v][n]='*';
			}
		}
	}
	for(int y=5;y<19;y++)
	{
		n=5;
		Final[n][y]=Palabra[p];
		p++;
	}
	for(int v=0;v<11;v++)
	{
		for(int n=0;n<24;n++)
		{
			cout<<Final[v][n]<<"  ";
		}
		cout<<endl;
		cout<<endl;
	}
	return 0;
}
