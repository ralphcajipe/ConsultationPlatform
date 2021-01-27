#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main()
{	//Declare
	int input, menu,inquiry, hours, gustongHours, arthur, mode, pin;
	char homeChoice, menuChoice, insideInquiry, photovideo, payment, choice1,consultant,goback,faqs;
	float bill [3]={500.00,1000.00,10000.00};
	float duration, tax, subtotal, bal;
	//Declare
	
	//Home
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\t\t -------------------DigiArte------------------"<<endl;
	cout << "\t\t\t\t\t\t\t\t|                                             |"<<endl;
	cout << "\t\t\t\t\t\t\t\t|  Press Y to continue or press N to exit     |"<<endl;
	cout << "\t\t\t\t\t\t\t\t|    Brought to you by Henry C++ Group        |"<<endl;
	cout << "\t\t\t\t\t\t\t\t|                                             |"<<endl;
	cout << "\t\t\t\t\t\t\t\t ---------------------------------------------"<<endl;
	
	input:
	cout << "\n\t\t\t\t\t\t\t\t\t     Enter Input [y/n] : ";
	cin >> homeChoice;
	//Home
	
	//1st switch - Home Choice to proceed to DigiArte Menu
	switch(homeChoice)
	{
		case 'Y' :
		case 'y' :
		{
			goto menu;
			break;
		}
		case 'N' :
		case 'n' :
		{	
			
			cout<<"\n\t\t\t\t\t\t\t\tBye user! This is brought to you by Henry C++ Group.";
			exit(EXIT_SUCCESS);
			break;
		}
		default :
		{
			cout << "\n\t\t\t\t\t\t\t\t\tYou entered wrong input. Try again."<<endl;
			goto input;
			break;
		}
	}
	//1st switch - Home Choice to proceed to DigiArte Menu
	
					//do{	
	
		//DigiArte Menu
		menu:
		system("cls");
		cout << "\n\t\t\t\t\t\t\t-----------------------------------------------------------"<<endl;
		cout << "\t\t\t\t\t\t\t|                      DigiArte - Menu                    |"<<endl;
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------------"<<endl;
		
				cout << "\n\t\t\t\t\t\t\t\t [A] Find a consultant \t[C] FAQs"<<endl;
				cout << "\n\t\t\t\t\t\t\t\t [B] About us \t\t[D] Exit"<<endl;
				cout << "\t\t\t\t\t\t\t---------------------------------------------------------"<<endl;  
				

		choose:
		cout <<"\t\t\t\t\t\t\tSelect from the menu: ";
		cin >> menuChoice;
		//DigiArte Menu
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//2nd switch - menuChoice
		TypeofArt:	
		switch(menuChoice)
		{
			//[A] Find consultant
			case 'A' :
			case 'a' :
			{
				system("cls");
				cout<<"Let us know your art inquiry by";
				cout<<" choosing your preferred type of art.\n\n\n";
				cout<<"[1] Photography and Video\n";
				cout<<"[2] Vector Art\n";
				cout<<"[3] Photopainting\n";
				cout<<"[4] Collage\n";
				cout<<"\n[5] Go back Main Menu\n";
				cout<<"[6] Exit\n\n";
				
					//2nd switch - menuChoice
		

				cout << "Enter the number of your choice: ";
				cin>>insideInquiry;

				system("cls");
				
				//3RD SWITCH - insideInquiry
				inquiry:
				switch(insideInquiry)
				{
					case '1' : //Photography and Video
					{
						puntaPhotoVid:
						cout<<"\n\nYou chose Photography and Video!\n\n\n";
						cout<<"We've garnered the best photography/video consultants around the country for you!\n\n";
						system("pause");
						system("cls");
						PhotoConsultants:
						cout<<"Here are the best Photography consultants available:\n\n\n";
						cout<<"[A] Arthur Merlin\n";

						
						break;
					}
					case '2' : //Vector Art
					{
						puntaVector:
						cout<<"\n\nYou chose Vector Art!\n\n\n";
						cout<<"We've garnered the best vector art consultants around the country for you!\n\n";
						system("pause");
						system("cls");
						VectorConsultants:
						cout<<"Here are the best Vector Art consultants available:\n\n\n";
						cout<<"[B] Yukizaira Miyamoto \n";

						
						break;
					}
					case '3' : //Photopainting
					{
						puntaPp:
						cout<<"\n\nYou chose Photopainting!\n\n\n";
						cout<<"We've garnered the best Photopainting consultants around the country for you!\n\n";
						system("pause");
						system("cls");
						PpConsultants:
						cout<<"Here are the best Photopainting consultants available:\n\n\n";
						cout<<"[C] Linda Weech\n";

						
						break;
					}
					case '4' : //Collage
					{
						puntaCollage:
						cout<<"\n\nYou chose Collage Art!\n\n\n";
						cout<<"We've garnered the best Collage Art consultants around the country for you!\n\n";
						system("pause");
						system("cls");
						CollageConsultants:
						cout<<"Here are the best Collage Art consultants available:\n\n\n";
						cout<<"[D] Alec Narzwic\n";

						
						break;
					}
					
					case '5' : //Go back Main Menu
					{
						goto menu;
						break;
					}
					
					case '6' : //Exit
					{
						cout<<"\n\t\t\t\t\t\t\t\tBye user! This is brought to you by Henry C++ Group.";
						exit(EXIT_SUCCESS);
						break;
					}
					
					//In case wrong input in choosing Type of Art				
					default :
					cout << "\n\t\t\t\t\tYou entered wrong input. Try again." <<endl;
					system("pause");
					goto TypeofArt;
					break;
				
				}//3RD SWITCH - insideInquiry
						cout << "\n\nEnter letter of your choice: ";
						cin>>consultant;//Enter prefered consultant
						
						system("cls");

							switch(consultant)
							{
								case 'A' :
								case 'a' : //Arthur
								{
								cout<<"You've chosen Arthur Merlin\n\n";
								cout<<"Arthur's General Information:";	
								cout<<"\n\n\nArthur Merlin is a graduate from Tisch School of Arts in New York.\n";
								cout<<"He took up Bachelor of Arts in Digital Photography. And has 4 years\n";
								cout<<"experience in the industry\n\n\n";
								cout<<"The hourly rate of Mr. Merlin is 500 pesos";
								

								
							
								break;
								//Continuation of list of consultants...
							}
							
								
								case 'B' :
								case 'b' : //Arthur
								{
								cout<<"You've chosen Yukizaira Miyamoto\n\n";
								cout<<"Yukizaira's General Information:";	
								cout<<"\n\n\nYukizaira Miyamoto is an international figure when it comes to Vector arts. \n";
								cout<<"Some has coined him the founding father of Vector arts. \n";
								cout<<"He specializes in character drawings and icons.\n\n\n";
								cout<<"The hourly rate of Mr. Miyamoto is 500 pesos";
								
								break;
								}
								
								case 'C' :
								case 'c' : //Linda
								{
								cout<<"You've chosen Linda Weech\n\n";
								cout<<"Linda's General Information:";	
								cout<<"\n\n\nLinda Weech is a prominent figure in the field of photopainting.\n";
								cout<<"She never took a break from achieving certifications from software companies \n";
								cout<<"thus providing her the best credentials for her line of work.\n\n\n";
								cout<<"The hourly rate of Ms. Weech is 500 pesos.";
	
								break;
								//Continuation of list of consultants...
								}
								
								case 'D' :
								case 'd' : //Alec
								{
								cout<<"You've chosen Alec Narzwic\n\n";
								cout<<"Alec's General Information:";	
								cout<<"\n\n\nAlec Narzwic is a student from Ohio State University and part times as a digital artist.\n";
								cout<<"He specializes in creating unique collage designs and amazing mosaic \n";
								cout<<"artworks from thousands of photo that are never the same. \n\n\n";
								cout<<"The hourly rate of Mr. Narzwic is 500 pesos.";
	
								break;
								}
							
							
							
							default:
								{
								cout << "\nYou entered a wrong choice!\n";
								goto TypeofArt;
							}
								
						}
						//Continuation of types of art...
							
								gustongHours:
									
								cout<<"\nLet us know how many hour/s you'd like to have a consultation:\n\n\n";
								cout<<"Min: 1 hour,   Max: 12 hours\n";										
								cout << "\n\nEnter desired hours: ";
								cin>> gustongHours;
								if(gustongHours<=12)
								{
									cout<<"You chose " <<gustongHours << " hour(s)\n\n\n\n";	

									system("pause");
									system("cls");
									cout <<"\nPAYMENT";
									cout <<"\nSelect your mode of payment ";
									cout <<"\n[1] Paypal";
									cout <<"\n[2] BDO\n";
									cout << "\n\nEnter number of choice: ";
									cin >> mode;
									if(mode==1)
									{
										Paypal:
										cout << "\nYou have chosen Paypal as mode of payment.";
										cout << "\nEnter your 6 digit pin: ";
										cin >> pin;
										system("cls");
										if(pin==123456)									
										{
											cout << "\nPayment successful";
											cout << "\nPlease wait for your receipt.";
											
											cout<<"\t\t\t\t\n\nProcessing Receipt!\n\n\n\n\n\n\n\n\n";
											//ung naka ASCII na text
											
											
											system("color 0a");
										 	cout<<"\t\t\t\tPrinting your receipt...\n\n\n\n";
										 	char a=177, b=219;
										 	cout<<"\t\t\t\t";
										 	for (int i=0;i<=15;i++)
										 	cout<<a;
										 	cout<<"\r";
										 	cout<<"\t\t\t\t";
										 	for (int i=0;i<=15;i++)
										 	{
										  	cout<<b;
										  	for (int j=0;j<=1e8;j++); //You can also use sleep function instead of for loop
										 	}
											
											cout<<"\n\n\n\t\t\t\t";
											
											system ("CLS");
	system ("cls");
	
	cout << "\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
	cout << "\n" << setw(40) << " DigiArte " << endl;
	cout << setw(45) << " Consult your Art. " << endl;
	cout << setw(40) << " +07895967 " << endl;
	cout << "\t\t 7/F Unit B, 8 Rockwell, Rockwell Drive, Rockwell Center, Makati City, Manila, Metro Manila " << endl;
	cout << setw(47) << " 11/6/2019(Wed) 15:28:02 " << endl;
	cout << "\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
	
	cout << "\n\n   Expenses " << setw(55) << " Price \n\n";
	cout << setprecision(1) << fixed << "   " << gustongHours << " hr/s @500/hr\n\n";
	duration = gustongHours * 500;
	cout << "   Duration................................................" << setprecision(2) << fixed << duration << "\n\n";
	cout << "   Consultation Fee........................................" << bill [0] << "\n\n";
	cout << "   Professional Fee........................................" << bill [1] << "\n\n\n\n";
	cout << "   @12%\n\n";
	tax = (duration + bill [0] + bill [1]) * 0.12;
	cout << "   Taxes..................................................." << setprecision(2) << fixed << tax << "\n\n\n";
	
	cout << " ================================================================================================= \n\n\n";
	subtotal = duration + bill [0] + bill [1] + tax;
	cout << "   SubTotal................................................" << setprecision(2) << fixed << subtotal << "\n\n";
	bal = bill [2] -subtotal;
	cout << "   Balance................................................." << bal << endl;
	
	cout << "\n\n\n This receipt shall be valid for five (5) years from the date of permit to use. \n\n\n";
	cout << setw(55) << " THIS IS AN OFFICAL RECEIPT! \n\n\n\n\n";
										}
											else
											{
											
												cout << "\n\nInvalid pin! Try again.";
												goto Paypal;
											}
										
										
									}
									//if mode is BDO here
									else if(mode==2)
									{
										BDO:
										cout << "\nYou have chosen BDO as mode of payment.";
										cout << "\nEnter your 6 digit pin: ";
										cin >> pin;
										system("cls");
										if(pin==123456)									
										{
											cout << "\nPayment successful";
											cout << "\nPlease wait for your receipt.";
											
											cout<<"\t\t\t\t\n\nProcessing Receipt!\n\n\n\n\n\n\n\n\n";
											//ung naka ASCII na text
											
											
											system("color 0a");
										 	cout<<"\t\t\t\tPrinting your receipt...\n\n\n\n";
										 	char a=177, b=219;
										 	cout<<"\t\t\t\t";
										 	for (int i=0;i<=15;i++)
										 	cout<<a;
										 	cout<<"\r";
										 	cout<<"\t\t\t\t";
										 	for (int i=0;i<=15;i++)
										 	{
										  	cout<<b;
										  	for (int j=0;j<=1e8;j++); //You can also use sleep function instead of for loop
										 	}
											
											cout<<"\n\n\n\t\t\t\t";
											
											system ("CLS");
	system ("cls");
	
	cout << "\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
	cout << "\n" << setw(40) << " DigiArte " << endl;
	cout << setw(45) << " Consult your Art. " << endl;
	cout << setw(40) << " +07895967 " << endl;
	cout << "\t\t 7/F Unit B, 8 Rockwell, Rockwell Drive, Rockwell Center, Makati City, Manila, Metro Manila " << endl;
	cout << setw(47) << " 11/6/2019(Wed) 15:28:02 " << endl;
	cout << "\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
	
	cout << "\n\n   Expenses " << setw(55) << " Price \n\n";
	cout << setprecision(1) << fixed << "   " << gustongHours << " hr/s @500/hr\n\n";
	duration = gustongHours * 500;
	cout << "   Duration................................................" << setprecision(2) << fixed << duration << "\n\n";
	cout << "   Consultation Fee........................................" << bill [0] << "\n\n";
	cout << "   Professional Fee........................................" << bill [1] << "\n\n\n\n";
	cout << "   @12%\n\n";
	tax = (duration + bill [0] + bill [1]) * 0.12;
	cout << "   Taxes..................................................." << setprecision(2) << fixed << tax << "\n\n\n";
	
	cout << " ================================================================================================= \n\n\n";
	subtotal = duration + bill [0] + bill [1] + tax;
	cout << "   SubTotal................................................" << setprecision(2) << fixed << subtotal << "\n\n";
	bal = bill [2] -subtotal;
	cout << "   Balance................................................." << bal << endl;
	
	cout << "\n\n\n This receipt shall be valid for five (5) years from the date of permit to use. \n\n\n";
	cout << setw(55) << " THIS IS AN OFFICAL RECEIPT! \n\n\n\n\n";
										}
											else
											{
											
												cout << "\n\nInvalid pin! Try again.";
												goto BDO;
											}
										
										
									}
									
									
									
									
								//////////////////////////////////////////////////////////////////////////////////	
								}
								
								else if(gustongHours=0)
								{
									cout <<"The hour rate is from 1 to 12 hours only.";
									goto gustongHours;
								}
								
								else
								{
									cout <<"The hour rate is from 1 to 12 hours only.";
									goto gustongHours;
								
								}
						
				
				break;
			}
			case 'B' ://About
			case 'b' :
				system("cls");
				
				cout<<"\n\t\t\t\t\t\t\t\tABOUT US";
				cout<<"\n\nTraditional consulting firms specializing in digital art are mostly located in urban areas ";
				cout<<"with a good reputation for startup companies. \nWhile it is rampant, this creates barrier for people "; 
				cout<<"living in towns or country sides to reach them for consultation. That is why we \ncreated DigiArte, "; 
				cout<<"an answer to your art inquiries to be analyzed, assessed and discussed with digital artists without ";
				cout<<"leaving your home." <<endl;
				
				cout<<"\n\nDigiArte is an online digital art consultation platform. The platform is to get the most affordable, " ;
				cout<<"convenient and creative digital art services \nfrom professional and licensed digital artists. You can get " ;
				cout<<"art documents, easily drafted  for you using video or voice or chat system of your choice \nto see what's " ;
				cout<<"best for your discussion." <<endl;
				cout<<"\n\t\t\t\t\t\t\t\tTHE DEVELOPERS";
				cout<<"\n\n\t\t\t\t\t\tRalph Cajipe    - Team Lead and Quality Assurance";
				cout<<"\n\n\t\t\t\t\t\tAllyster Samson - Programmer and Analysis";
				cout<<"\n\n\t\t\t\t\t\tKyle Garcia     - Design and Tester";
				cout<<"\n\n\t\t\t\t\t\tAries Medina    - Design and Documentation";
				
				cout<<"\n\n\n\t\t\t\t\t\t\t\* To go back, press 'Y' or 'y'";
				cout<<"\n\t\t\t\t\t\t\t\* To exit, press 'N' or 'n'\n";
				cout<<"\n\t\t\t\t\t\t\tEnter your choice: ";
				cin>>goback;
				
				switch(goback)
				{
					case 'Y' :
					case 'y' :
					{
						goto menu;
						break;
					}
					case 'N' :
					case 'n' :
					{	
						
						cout<<"\n\t\t\t\t\t\tBye user! This is brought to you by Henry C++ Group.";
						exit(EXIT_SUCCESS);
						break;
					}
					default :
					{
						cout << "\n\t\t\t\t\t\t\t\t\tYou entered wrong input. Try again."<<endl;
						goto input;
						break;
					}
				}
							break;
				
			//Case FAQs
			case 'C' :
			case 'c' :
				system("cls");
				cout<<"\n\t\t\t\t\t\tFrequently Asked Questions";
				
				cout<<"\n\n\t\t\t\t\t\t[a] What is this program for?\n";
				cout<<"\n\t\t\t\t\t\tAnswer: DigiArte is an answer to people's art inquiries to be analyzed, assessed and discussed with";
				cout<<"\n\t\t\t\t\t\t         professional digital artists without leaving their homes.";
				
				cout<<"\n\n\n\t\t\t\t\t\t[b] How do I pay?\n";
				cout<<"\n\t\t\t\t\t\tAnswer: You can pay via Paypal or BDO services.";
				
				cout<<"\n\n\n\t\t\t\t\t\t[c] What if I want hour beyond the 12 hours range?\n";
				cout<<"\n\t\t\t\t\t\tAnswer: Unfortunately, we only offer an hour rate with minimum of 1 hour and a maximum of 12 hours.";
				
				cout<<"\n\n\n\t\t\t\t\t\t[d] How do you price your services?\n";
				cout<<"\n\t\t\t\t\t\tAnswer: You may contact our sales officers via digiartesales@gmail.com";

				

				cout<<"\n\n\n\t\t\t\t\t\t\t\* To go back, press 'Y' or 'y'";
				cout<<"\n\t\t\t\t\t\t\t\* To exit, press 'N' or 'n'\n";
				cout<<"\n\t\t\t\t\t\t\tEnter your choice: ";				
				cin>>goback;
				
				switch(goback)
				{
					case 'Y' :
					case 'y' :
					{
						goto menu;
						break;
					}
					case 'N' :
					case 'n' :
					{	
						
						cout<<"\n\t\t\t\t\t\tBye user! This is brought to you by Henry C++ Group.";
						exit(EXIT_SUCCESS);
						break;
					}
					default :
					{
						cout << "\n\t\t\t\t\t\t\t\t\tYou entered wrong input. Try again."<<endl;
						goto input;
						break;
					}
				}
				break;
				
			//Case Exit
			case 'D' :
			case 'd' :
				cout << "\n\n\t\t\t\t\t\t\t Bye user! This is brought to you by Henry C++ Group.";
				exit(EXIT_SUCCESS);
				break;
			//In case wrong input in Main Menu			
			default :
				cout << "\n\t\t\t\t\tYou entered wrong input. Try again." <<endl;
				system("pause");
				goto menu;
				break;
				
			}//end of switch
		
	
					
						
		
		
					
	return 0;
}
