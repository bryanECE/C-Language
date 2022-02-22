#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    
    
    cout<<"\t\t\t\tWelcome to El Bogarto\n\n\n";
    cout<<setw(70)<<"   8888  88   88     88     888888  88   8888    8888  \n";
    cout<<setw(70)<<"\t88  88 88   88    8888    88   88 88  88  88 88    88  \n";
    cout<<setw(70)<<" 88      8888888   88  88   888888  88 88      88    88\n";
    cout<<setw(70)<<"  88  88 88   88  88888888  88  88  88  88  88 88    88\n";
    cout<<setw(69)<<"   8888  88   88 88      88 88   88 88   8888    8888  ";
    cout<<"\t\t\t\t\t\t \n\t\t\t\tPastries and Sweets";
    cout<<"\n\n\n";
    cout<<setw(66)<<"\t Where Wonderful Delights can only be found in Here\n";
    cout<<setw(65)<<"\t The Original and One and Only El Bogarto Charico.\n";
    cout<<"\n\n\n\n\n";
    system("PAUSE");
    system("cls");

    int choice;
	char pastries, icecream, beverages;
	char ans;
    int pp1=0, pp2=0, pp3=0, pp4=0;
    int tpp1=0, tpp2=0, tpp3=0, tpp4=0;
	int icp1=0, icp2=0, icp3=0, icp4=0, icp5=0, icp6=0, icp7=0;
	int ticp1=0, ticp2=0, ticp3=0, ticp4=0, ticp5=0, ticp6=0, ticp7=0;
	int bp1=0, bp2=0, bp3=0, bp4=0;
	int tbp1=0, tbp2=0, tbp3=0, tbp4=0;
    double totalPastriesPrice=0, totalIcecreamPrice=0, totalBeveragesPrice=0;
	double TotalSales=0, Vat=0, TotalPriceVat=0;
    

	do
	{
	cout<<"\tWhat do you want to buy?\n\n";
    cout<<"\t[1]\tPastries\n";
    cout<<"\t[2]\tIce Cream & Frozen Treats\n";
    cout<<"\t[3]\tBeverages\n\n";
	cout<<"Enter your choice: ";
	cin>>choice;

    system("cls");
    
    
	
    if (choice == 1)
	{
		do
		{
			cout<<"Pastries:\n\n";
         	cout<<"[a]\tSEASONAL FAVORITE\t\t";
       		cout<<"Php\t70.00\n";
          	cout<<"[b]\tCROISSANTS\t\t\t";
          	cout<<"Php\t70.00\n";
          	cout<<"[c]\tCINNAMON ROLLS\t\t\t";
          	cout<<"Php\t50.00\n";
          	cout<<"[d]\tBOGARTO SPECIAL ROLLS\t\t";
          	cout<<"Php\t300.00\n";
          	cout<<"[e]\tBROWNIES\t\t\t";
          	cout<<"Php\t70.00\n";
          	cout<<"[f]\tDELIGHTS\t\t\t";
          	cout<<"Php\t300.00\n";
          	cout<<"[g]\tCOOKIE CUPS\t\t\t";
          	cout<<"Php\t40.00\n";
          	cout<<"[h]\tDIPPED & TOPPED COOKIES\t\t";
          	cout<<"Php\t70.00\n";
          	cout<<"[i]\tCOOKIE CAKE SLICE\t\t";
          	cout<<"Php\t70.00\n";
          	cout<<"[j]\tMINI COOKIES\t\t\t";
          	cout<<"Php\t70.00\n";
          	cout<<"\n\n";
          	cout<<"Enter your choice: ";
          	cin>>pastries;

			system("cls");

          	if(pastries == 'a' || pastries == 'b' || pastries == 'e' || pastries == 'h' || pastries == 'i' || pastries == 'j')
          	{
				pp1 = 70;
				tpp1+=pp1;
          	}
            else if(pastries == 'c')
          	{
				pp2 = 50;
				tpp2+=pp2;
          	}
			else if(pastries == 'd' || pastries == 'f')
          	{
				pp3 = 300;
				tpp3+=pp3;
          	}
            else if(pastries == 'g')
			{
				pp4 = 40;
				tpp4+=pp4;
			}
			
			cout<<"Is there anything else you want to buy?[y][n]";
			cin>>ans;
			
			system("cls");

			if(ans == 'n')
			{
				break;
            }
			
			totalPastriesPrice = tpp1+tpp2+tpp3+tpp4;

                
            }while(ans == 'y');

	}
	
	else if (choice == 2)
	{
		do
		{
			cout<<"ICE CREAM & fROZEN TREATS:\n\n";
			cout<<"[a]\tSUNDAES\t\t\t";
			cout<<"Php\t98.00\n";
			cout<<"[b]\tBANANA SPLITS\t\t";
			cout<<"Php\t130.00\n";
			cout<<"[c]\tMALTS & SHAKES\t\t";
			cout<<"Php\t58.00\n";
			cout<<"[d]\tCHARICO TWISTER\t";
			cout<<"\tPhp\t240.00\n";
			cout<<"[e]\tSMOOTHIES & CHILLERS\t";
			cout<<"Php\t78.00\n";
			cout<<"[f]\tCHOCOLATE LOVA\t\t";
			cout<<"Php\t300.00\n";
			cout<<"[g]\tCREAMSICLE\t\t";
			cout<<"Php\t98.00\n";
			cout<<"[h]\tISLAND DELIGHT\t\t";
			cout<<"Php\t300.00\n";
			cout<<"[i]\tMIX BERRIES\t\t";
			cout<<"Php\t98.00\n";
			cout<<"[j]\tTROPICAL\t\t";
			cout<<"Php\t150.00\n";
			cout<<"\n\n";
			cout<<"Enter your choice: ";
			cin>>icecream;

			system("cls");
			
			if (icecream == 'a' || icecream == 'g' || icecream == 'i')
			{
				icp1 = 98;
				ticp1+=icp1;
			}
			else if (icecream == 'b')
			{
				icp2 = 130;
				ticp2+=icp2;
			}
			else if (icecream == 'c')
			{
				icp3 = 58;
				ticp3+=icp3;
			}
			else if (icecream == 'd')
			{
				icp4 = 240;
				ticp4 += icp4;
			}
			else if (icecream =='e')
			{
				icp5 = 78;
				ticp5 += icp5;
			}
			else if (icecream == 'f' || icecream == 'h')
			{
				icp6 = 300;
				ticp6 += icp6;
			}
			else if (icecream == 'j')
			{
				icp7 = 150;
				ticp7 += icp7;
			}

			cout<<"Is there anything else you want to buy?[y][n]";
			cin>>ans;
			
			system("cls");

			if(ans == 'n')
			{
				break;
            }
			
			
		}while (ans == 'y');
	}

	else if (choice == 3)
	{
		do
		{
			cout<<"BEVERAGES:\n\n";
			cout<<"[a]\tCAFE LATTE\t\t";
			cout<<"Php\t 88.00\n";
			cout<<"[b]\tCAFE BORGARITO\t\t";
			cout<<"Php\t 88.00\n";
			cout<<"[c]\tFOUR SEASONS\t\t";
			cout<<"Php\t 70.00\n";
			cout<<"[d]\tBOTTLED NESQUIK\t\t";
			cout<<"Php\t 80.00\n";
			cout<<"[e]\tHOT TEA\t\t\t";
			cout<<"Php\t 80.00\n";
			cout<<"[f]\tMILK\t\t\t";
			cout<<"Php\t 80.00\n";
			cout<<"[g]\tCHARICO SODA\t\t";
			cout<<"Php\t 95.00\n";
			cout<<"[h]\tHOT CHOCOLATE\t\t";
			cout<<"Php\t 80.00\n";
			cout<<"[i]\tFROZEN MOCHA\t\t";
			cout<<"Php\t 80.00\n";
			cout<<"[j]\tBORGARITO ESPRESSO\t";
			cout<<"Php\t 95.00\n";
			cout<<"\n\n";
			cout<<"Enter you choice: ";
			cin>>beverages;
			
			system("cls");

			if (beverages == 'a' || beverages == 'b')
			{
				bp1 = 88;
				tbp1 += bp1;
			}
			else if (beverages == 'c')
			{
				bp2 = 70;
				tbp2 += bp2;
			}
			else if (beverages == 'd' || beverages == 'e' || beverages == 'f' || beverages == 'h' || beverages == 'i')
			{
				bp3 = 80;
				tbp3 += bp3;
			}
			else if (beverages =='g' || beverages == 'j')
			{
				bp4 = 95;
				tbp4 += bp4;
			}
			cout<<"Is there anything else you want to buy?[y][n]";
			cin>>ans;

			system("cls");

			if(ans == 'n')
			{
				break;
			}
			
			
		
		}while (ans == 'y');
	}

	cout<<"Do you want to buy our other products?[y][n] ";
	cin>>ans;

	system("cls");

	}while (ans == 'y');
	
	system("cls");
	
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	totalPastriesPrice = tpp1+tpp2+tpp3+tpp4;
	totalIcecreamPrice = ticp1+ticp2+ticp3+ticp4+ticp5+ticp6+ticp7;
	totalBeveragesPrice = tbp1 + tbp2 + tbp3 + tbp4;
	
	TotalSales = totalPastriesPrice + totalIcecreamPrice + totalBeveragesPrice;
	Vat = TotalSales * 0.12;
	TotalPriceVat = TotalSales + Vat;
	
	cout<<"Subtotal:\t"<<TotalSales<<"\n\n\n\n\n";
    cout<<"VAT:\t\t"<<Vat<<"\n\n\n\n\n\n";
   	cout<<"Total Purchase: "<<TotalPriceVat<<"\n\n\n\n\n\n";
	cout<<"Thank you and Come Again. El Bogarto Charico!!!\n\n\n";

       
system("PAUSE");
return 0;
}