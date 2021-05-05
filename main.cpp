#include <iostream>
using namespace std;

int main() 
{
   int a,b,c,num;
  
  cout << "Digite un numero de 1 a 999\n \n";
  cin  >> num;
  a = (num-num/10*10);             // unidades 
  b = (num-num/100*100-a)/10;      // decenas 
  c = (num-num/1000*1000-a-b)/100; // centenas 
while (num != 0)
  {
      switch (c) // selector de las centenas 
        {
        case 1:
        if (b == 0 && a == 0 ) // solo si las unidades y las decenas valen 0 imprime cien.
          {
          cout << "Cien ";
          }
            else  // de lo contrio imprime ciento uno, ciento dos etc
            {
            cout << "Ciento ";
            }
          break;
          case 2:
          cout << "Doscientos ";
          break;
          case 3:
          cout << "Trescientos ";
          break;
          case 4:
          cout << "Cuatrocientos ";
          break;
          case 5:
          cout << "Quinientos ";
          break;
          case 6:
          cout << "Seiscientos ";
          break;
          case 7:
          cout << "Setecientos ";
          break;
          case 8:
          cout << "Ochocientos ";
          break;
          case 9:
          cout << "Novecientos ";
          break;
          }
        switch (b)   // selector para las decenas 
            {
                case 0: // en caso de que las decenas sean 0 
              switch (a) // selecciona las unidades y las imprime
                {
                  case 1: 
                  cout << "uno";
                  break; 
                  case 2: 
                  cout << "dos";
                  break;
                  case 3: 
                  cout << "tres";
                  break;
                  case 4: 
                  cout << "cuatro";
                  break;
                  case 5: 
                  cout << "cinco";
                  break;
                  case 6: 
                  cout << "seis";
                  break;
                  case 7: 
                  cout << "siete";
                  break;
                  case 8: 
                  cout << "ocho";
                  break;
                  case 9: 
                  cout << "nueve";
                  break;
                  }
                break;
                    case 1: //en caso de que la decena tenga valor de 1
                      switch (a) // selecciona las unidades y las imprime
                    {
                  case 0: 
                  cout << "diez";
                  break; 
                  case 1: 
                  cout << "once";
                  break;
                  case 2: 
                  cout << "doce";
                  break;
                  case 3: 
                  cout << "trece";
                  break;
                  case 4: 
                  cout << "catorce";
                  break;
                  case 5: 
                  cout << "quince";
                  break;
                  case 6: 
                  cout << "dieciseis";
                  break;
                  case 7: 
                  cout << "diecisiete";
                  break;
                  case 8: 
                  cout << "dieciocho";
                  break;
                  case 9: 
                  cout << "diecinueve";
                  break;
                    }
                break;
                      
                   case 2: //en caso de que la decena tenga valor de 2
                    switch (a) // selecciona la unidad y la imprime
                  {
                  case 0: 
                  cout << "Veinte";
                  break; 
                  case 1: 
                  cout << "Veintiuno";
                  break;
                  case 2: 
                  cout << "Veintidos";
                  break;
                  case 3: 
                  cout << "Veintitres";
                  break;
                  case 4: 
                  cout << "Veinticuatro";
                  break;
                  case 5: 
                  cout << "Veinticinco";
                  break;
                  case 6: 
                  cout << "Veintiseis";
                  break;
                  case 7: 
                  cout << "Veitisiete";
                  break;
                  case 8: 
                  cout << "Veintiocho";
                  break;
                  case 9: 
                  cout << "Veintinueve";
                  break;
                    }
                break;
                  case 3: //en caso de que la decena tenga valor de 3
                      switch (a) // selecciona la unidad y la imprime
                    {
                  case 0: 
                  cout << "Treinta";
                  break; 
                  case 1: 
                  cout << "Treinta y uno";
                  break;
                  case 2: 
                  cout << "Treinta y dos";
                  break;
                  case 3: 
                  cout << "Treinta y tres";
                  break;
                  case 4: 
                  cout << "Treinta y cuatro";
                  break;
                  case 5: 
                  cout << "Treinta y cinco";
                  break;
                  case 6: 
                  cout << "Treinta y seis";
                  break;
                  case 7: 
                  cout << "Treinta y siete";
                  break;
                  case 8: 
                  cout << "Treinta y ocho";
                  break;
                  case 9: 
                  cout << "Treinta y nueve";
                  break;
                    }
                break;
                  case 4: //en caso de que la decena tenga valor de 4
                      switch (a) // selecciona la unidad y la imprime
                    {
                  case 0: 
                  cout << "Cuarenta";
                  break; 
                  case 1: 
                  cout << "Cuarenta y uno";
                  break;
                  case 2: 
                  cout << "Cuarenta y dos";
                  break;
                  case 3: 
                  cout << "Cuarenta y tres";
                  break;
                  case 4: 
                  cout << "Cuarenta y cuatro";
                  break;
                  case 5: 
                  cout << "Cuarenta y cinco";
                  break;
                  case 6: 
                  cout << "Cuarenta y seis";
                  break;
                  case 7: 
                  cout << "Cuarenta y siete";
                  break;
                  case 8: 
                  cout << "Cuarenta y ocho";
                  break;
                  case 9: 
                  cout << "Cuarenta y nueve";
                  break;
                    }
                break;
                  case 5: //en caso de que la decena tenga valor de 5
                      switch (a) // selecciona la unidad y la imprime
                    {
                  case 0: 
                  cout << "Cincuenta ";
                  break; 
                  case 1: 
                  cout << "Cincuenta y uno ";
                  break;
                  case 2: 
                  cout << "Cincuenta y dos";
                  break;
                  case 3: 
                  cout << "Cincuenta y tres";
                  break;
                  case 4: 
                  cout << "Cincuenta y cuatro";
                  break;
                  case 5: 
                  cout << "Cincuenta y cinco";
                  break;
                  case 6: 
                  cout << "Cincuenta y seis";
                  break;
                  case 7: 
                  cout << "Cincuenta y siete";
                  break;
                  case 8: 
                  cout << "Cincuenta y ocho";
                  break;
                  case 9: 
                  cout << "Cincuenta y nueve";
                  break;
                    }
                break;
                  case 6: //en caso de que la decena tenga valor de 6
                      switch (a) // selecciona la unidad y la imprime
                    {
                  case 0: 
                  cout << "Sesenta ";
                  break; 
                  case 1: 
                  cout << "Sesenta y uno ";
                  break;
                  case 2: 
                  cout << "Sesenta y dos";
                  break;
                  case 3: 
                  cout << "Sesenta y tres";
                  break;
                  case 4: 
                  cout << "Sesenta y cuatro";
                  break;
                  case 5: 
                  cout << "Sesenta y cinco";
                  break;
                  case 6: 
                  cout << "Sesenta y seis";
                  break;
                  case 7: 
                  cout << "Sesenta y siete";
                  break;
                  case 8: 
                  cout << "Sesenta y ocho";
                  break;
                  case 9: 
                  cout << "Sesenta y nueve";
                  break;
                    }
                break;
                  case 7: //en caso de que la decena tenga valor de 7
                      switch (a) // selecciona la unidad y la imprime
                    {
                  case 0: 
                  cout << "Setenta ";
                  break; 
                  case 1: 
                  cout << "Setenta y uno ";
                  break;
                  case 2: 
                  cout << "Setenta y dos";
                  break;
                  case 3: 
                  cout << "Setenta y tres";
                  break;
                  case 4: 
                  cout << "Setenta y cuatro";
                  break;
                  case 5: 
                  cout << "Setenta y cinco";
                  break;
                  case 6: 
                  cout << "Setenta y seis";
                  break;
                  case 7: 
                  cout << "Setenta y siete";
                  break;
                  case 8: 
                  cout << "Setenta y ocho";
                  break;
                  case 9: 
                  cout << "Setenta y nueve";
                  break;
                    }
                break;
                  case 8: //en caso de que la decena tenga valor de 8
                      switch (a) // selecciona la unidad y la imprime
                    {
                  case 0: 
                  cout << "Ochenta ";
                  break; 
                  case 1: 
                  cout << "Ochenta y uno ";
                  break;
                  case 2: 
                  cout << "Ochenta y dos";
                  break;
                  case 3: 
                  cout << "Ochenta y tres";
                  break;
                  case 4: 
                  cout << "Ochenta y cuatro";
                  break;
                  case 5: 
                  cout << "Ochenta y cinco";
                  break;
                  case 6: 
                  cout << "Ochenta y seis";
                  break;
                  case 7: 
                  cout << "Ochenta y siete";
                  break;
                  case 8: 
                  cout << "Ochenta y ocho";
                  break;
                  case 9: 
                  cout << "Ochenta y nueve";
                  break;
                    }
                break;
                  case 9: //en caso de que la decena tenga valor de 9
                      switch (a) // selecciona la unidad y la imprime
                    {
                  case 0: 
                  cout << "Noventa ";
                  break; 
                  case 1: 
                  cout << "Noventa y uno ";
                  break;
                  case 2: 
                  cout << "Noventa y dos";
                  break;
                  case 3: 
                  cout << "Noventa y tres";
                  break;
                  case 4: 
                  cout << "Noventa y cuatro";
                  break;
                  case 5: 
                  cout << "Noventa y cinco";
                  break;
                  case 6: 
                  cout << "Noventa y seis";
                  break;
                  case 7: 
                  cout << "Noventa y siete";
                  break;
                  case 8: 
                  cout << "Noventa y ocho";
                  break;
                  case 9: 
                  cout << "Noventa y nueve";
                  break;
                    }
                break;
                  



                
                  }

    cout << "\n \n";
    cout << "\nDigite un numero de 1 a 999\nPara finalizar el programa digite 0 \n\n";
    cin  >> num;
     a = (num-num/10*10);             // unidades 
     b = (num-num/100*100-a)/10;      // decenas 
     c = (num-num/1000*1000-a-b)/100; // centenas 
    
                
  }
  cout << "\n El programa ha concluido satisfactoriamente pura vida!!\n";
  return 0;
  
 }

        

  
  