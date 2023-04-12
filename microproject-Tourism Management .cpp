#include<iostream>
#include<stdlib.h>
#include<istream>
#include<fstream>
#include<conio.h>
using namespace std;
class about
{
	public:
		void ab()
		{
			cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tTravitude             ";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\tWonder - Explore - Discover";
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tAbout us:";
	cout<<"\n\n Hello! We welcome you to our newly opened tourism service 'TRAVITUDE'. In this section your all the doubts regarding the bookings will be cleared.";
	cout<<" As we are recently came into service to explore people across \nthe India as well as across the World, we will try to provide best and classy service than";
	cout<<" other tourism companies and we promise you that. In our organisation we are just providing mode of transportation as by \nAir, so that you won't be tired in your rest of the journey.";
	cout<<" All the details regarding your flight and take off timing will be mailed and messaged to you on your respective contacts and emails, only after you \nconfirmed booking.";
	cout<<" But one thing is fixed that we only have our branch in mumbai right now so, flight will be take off from the Chhatrapati Shivaji Maharaj International Airport,";
	cout<<" our guides will be present there to guide you for further procedure. They will also be there in your whole journey so if any problem occurs you can convey to them and they will";
	cout<<" help you, all the contacts are provided in the same section after \nthis. Now coming to the dates we have fixed the dates according to the states which is best for that duration of time.";
	cout<<" So you have to plan your trip according to dates given in respective exploring section \nwether it is state or country. Dates are not tentative.";
	cout<<" Pricings are also given the respective exploring sections. In the final payment bill taxes will be added. Site of our organisation is so user friendly";
	cout<<" \nthat we assure you that you will not have any problem during surfing through it.But in case if any error occurs we will be mentioning you contacts and email for error solving and further details.";
	cout<<" We are so eager to help you out.Each and every detail regarding to your trip will be sent to you on your mails , contacts and we will also call you for confirmation on the contact number";
	cout<<" you provided. So please fill everything correctly to avoid problems!.";							
	cout<<"\n\n\nYou can mail us for further enquiry on -\nOur Email- travitude@gmail.com";							
	cout<<"\n\nYou can contact us for further enquiry / or if error occurs on -\nMobile - 9595111111\nTelphno - 67432";		
	cout<<"\n\nFor knowing your respective guide which will be on your trip, call or mail-\nMobile - 9595111110\nMail- travitude.guideinfo@gmail.com\n\nAddress- Travitude, back side of renuka mata temple , block C, Bandra west, Mumbai.";							
	cout<<"\n\nHope you have understood whole procedure, if not then call on the given contact numbers.\nWe will organize wonderful stay and tour for you !\nGive us a chance to Serve you !!";
	cout<<"\nHope you have a memorable stay..\nDo visit us again !\nThank You...!";		
	
		}
};

class mainmenu:public about
{
	private:
	string name;
	int no;
	string email;
	string address;
	int n;
	string nm[1];
	int arr[1];
	string em[1];
	string add[1];	
	int qty[1];
	int id;
	char ch;
	int i,j;
	float total,cgst,sgst,finaltotal;
	public:
		void mm1(void);	                                              //for mainmenu
		inline void title()                                    
		{
				cout<<"\n\n\t\t\t\t\t\tTravitude             ";
				cout<<"\n\t\t\t\t\tWonder - Explore - Discover";
		}
		void india(void);	                                       //for states display
	                                   								//for specific state -kashmir
		void fc(void);                                             //for foreign countries
		void about(void);   
		int acceptdetails()
		{
			
		int j=0;
		system("cls");
		cout<<"\nENTER YOUR DETAILS : \n";	
			cout<<"\nEnter Your Name:";
			cin>>name;
			cout<<"\nEnter Your Mobile No:";
			cin>>no;
			cout<<"\nEnter your Email Id:";
			cin>>email;
			cout<<"\nEnter Your Address:";
			cin>>address;
			cout<<"\nEnter The No Of People Traveling With You:";
			cin>>n;
			
			for( i=0;i<1;i++)
			{
				nm[i]=name;
				arr[i]=no;
				em[i]=email;
				add[i]=address;
				qty[i]=n;
			}
			return n;
			}
		
		void displaydetails()
		{
			
			for(i=0;i<1;i++)
			{
				cout<<"\n\n     BOOKING RECEIPT\n";
				cout<<"\nName\t\t: "<<nm[i];
				cout<<"\nMobile No\t: "<<arr[i];
				cout<<"\nEmail Id\t: "<<em[i];
				cout<<"\nAddress\t\t: "<<add[i];
				cout<<"\nNo Of People\t: "<<qty[i];
				
			}
		}
		void bookingfunction(); 
		void book()
		{
			char ch8;
			cout<<"\ndo you want to do booking enter b:";
cin>>ch8;
getch();
if(ch8=='b')
{

	bookingfunction();
}
else
{
	mm1();
}
		}                                      //for about us page
};

void mainmenu::india()
{
	int ch,ch1;
	char ch8;
	
	title();
	cout<<"\n\n\n\t\t\t\t\t\tINDIA";
    cout<<"\n\n--Select States you want to Explore in India :";
    cout<<"\n\n1.Kashmir \t\t\t\t-code 1\n2.Goa \t\t\t\t\t-code 2\n3.Rajasthan \t\t\t\t-code 3\n4.Kerela \t\t\t\t-code 4\n5.Uttar Pradesh \t\t\t-code 5";
    cout<<"\n\nPress 0 to Return mainmenu :";
	cin>>ch1;
	if(ch1==0)
	{
		
	system("cls");
 	mm1(); 
    }
    else
    {
    cout<<"\nPress Respective choices for exploring states :";	
    cin>>ch;
	switch(ch)
	{
		case 1: system("cls");
		cout<<"\n\n\t\t\t\tKASHMIR";
		cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
		cout<<"\n\n->  Cities you will get to explore in Kashmir package are :\n\n    1.SRINAGAR - Hazratbal Shrine, Pari Mahal, Tulips at Indira Gandhi Memorial Tulip Garden "<<endl;
	cout<<"\t\t Dal Lake, Shankaraacharya Temple, Sinthan Top, Dachigam National Park.";
	cout<<"\n    2.JAMMU - \tTemples, Forts, Palaces, Bahu Fort, Hari Niwas Palace, Tawi bridge,\n\t\tMubarak Mandi Palace.";
	cout<<"\n    3.GULMARG - Skiing Scenes, Shiva Temple, Maharani Temple.";
	cout<<"\n\n->  DATES TO VISIT : 1 june to 7 june.";
	cout<<"\n\n->  STAY: 7 days and 6 nights.";	
	cout<<"\n\n->  PRICING : 50000 for 2 persons.";
	cout<<"\n\n->  Hotels will be fixed by our guides, but for sure They will be 5 Star.";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
	book();
			break;
		case 2: 
	system("cls");
		cout<<"\n\n\t\t\t\tGOA";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
	cout<<"\n\n->  Cities you will get to explore in Goa package are :\n\n ";
	cout<<"\n    1.Vasco Da gama - Bogmalo Beach, Naval Aviation Museum, celebrations like shimgo and carnivals."; 
	cout<<"\n    2.Panaji - Church virgin Mary, Casino Royale, Fort Aguada, Goa Astrogical Musuem, odxel beach.";
 	cout<<"\n    3.Famous Beaches - Anjuna Beach, Baga Beach, Vagator Beach, Calagute Beach Etc.";
	cout<<"\n\n->  DATES TO VISIT : 21 December to 27 December.";
	cout<<"\n\n->  STAY : 7 days and 6 nights.";	
	cout<<"\n\n->  PRICING : 30000 for 2 persons.";
	cout<<"\n\n->  Hotels will be fixed by our guides, but for sure They will be 5 Star.";
			cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
	getch();
	book();		break;
		case 3: system("cls");
		cout<<"\n\n\t\t\t\tRAJASTHAN";
		cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
		cout<<"\n\n->  Cities you will get to explore in Rajasthan package are :\n\n ";

		cout<<"\n    1.Jaipur - Jal Mahal, Birla Mandir, Albert Hall Museum, Hawa Mahal, Jantar Mantar, Kanak Vrindavan, Amer Fort.";
	cout<<"\n    2.Udaipur - City Palace, Lake Palace, Jag Mandir, Kesariyaji Mandir, Monsoon Palace, Moti sagar.";
 	cout<<"\n    3.Jodhpur - Mehrangarh Fort, The Blue City, Umaid Bhawan Palace, Clock Tower.";
	cout<<"\n    4.Jaisalmer - Jaisalmer Fort,  Jain Haveli, Bada Bagh, The Great Indian Desert.";
	cout<<"\n\n->  DATES TO VISIT : 25 october to 31 october.";
	cout<<"\n\n->  STAY : 7 days and 6 nights.";	
	cout<<"\n\n->  PRICING : 35000 for 2 persons.";
	cout<<"\n\n->  Hotels will be fixed by our guides, but for sure They will be 5 Star.";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
	book();
	break;
		    
		case 4: system("cls");
		cout<<"\n\n\t\t\t\tKERELA";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
		cout<<"\n\n->  Cities you will get to explore in KERELA package are :\n\n ";
	cout<<"\n    1.Kochi - Marine Drive, Cochin Shipyard, Queen's Way, Hill Palace, Info park.";
	cout<<"\n    2.Munnar (kashmir of South India) - Rose Garden, Carmelagiri Elephant Park, Mattupetty Dam, Cowboy Park, Munnar tea Musuem. ";
 	cout<<"\n    3.Thiruvananthapurmam - Kulathoor, Niyamsabha, East Fort, Techno park, Kanakakunnu Palace, Kovalam Beach.";
	cout<<"\n\n->  DATES TO VISIT : 7 January to 13 January.";
	cout<<"\n\n->  STAY : 7 days and 6 nights.";	
	cout<<"\n\n->  PRICING : 39000 for 2 persons.";
	cout<<"\n\n->  Hotels will be fixed by our guides, but for sure They will be 5 Star.";
			cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
	book();
			break;
		    
		case 5: system("cls");
		cout<<"\n\n\t\t\t\tUTTAR PRADESH";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
	cout<<"\n\n->  Cities you will get to explore in KERELA package are :\n\n ";
	cout<<"\n    1.Agra - Taj Mahal, Agra Fort, Tomb of Akbar, Kinari Bazar.";
	cout<<"\n    2.Varanasi - Ahilya Ghat, Ganga Aarti, Ramnagar Fort.";
 	cout<<"\n    3.Lucknow - Bada Imambara, Rumi Darwaza, Hazratganj, La Martiniere, Begum Hazrat Mahal Park.";
	cout<<"\n    4.Kanpur - JK Temple, Green Park Stadium, Kanpur Memorial Church, Civil lines, Landmark Hotel.";
	cout<<"\n\n->  DATES TO VISIT : 2 february to 8 february.";
	cout<<"\n\n->  STAY : 7 days and 6 nights.";	
	cout<<"\n\n->  PRICING : 42000 for 2 persons.";
	cout<<"\n\n->  Hotels will be fixed by our guides, but for sure They will be 5 Star."; 
			cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
	book();
			break;
		    
		default: system("cls"); india();
	}
   }
};
void mainmenu::fc()
{

	int ch,ch1;
	title();
	cout<<"\n\n\n\t\t\t\t\t\tForeign Countries";
    cout<<"\n\n--Select countries you want to Explore :";
    cout<<"\n\n1.US \t\t\t\t\t-code 6\n2.EUROPE \t\t\t\t-code 7\n3.UK \t\t\t\t\t-code 8\n4.Australia \t\t\t\t-code 9\n5.Maldives \t\t\t\t-code 10";
    cout<<"\n\nPress 0 to Return mainmenu :";
	cin>>ch1;
	if(ch1==0)
	{
		system("cls");
    	mm1(); 
    }
    else
    {
    cout<<"\nPress Respective choices for exploring states :";	
    cin>>ch;
	switch(ch)
	{
		case 1:system("cls"); 
		cout<<"\n\n\t\t\t\tUS";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
		cout<<"\n\n\n\n->  Places you will get to explore in USA package are :\n\n   ";
	 cout<<"\n    New York, Mount Rushmore, Venice beach in Los Angels, Boston, Chicago, Walt Disney World in Orlando, Las Vegas,Denali National Park, Niagara Falls, San Francisco, Grand Canyon, White House.";
	cout<<"\n\n->  DATES TO VISIT : 10 April to 19 April.";
	cout<<"\n\n->  STAY : 10 days and 9 nights.";	
	cout<<"\n\n->  PRICING : 9,00,000 for 2 persons.";
	cout<<"\n\n->  Hotels will be fixed by our guides, but for sure They will be 5 Star.";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
		book();
			break;
		case 2:system("cls"); 
		cout<<"\n\n\t\t\t\tEUROPE";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";

	cout<<"\n\n\n\n->  Countries you will get to explore in Europe package are :\n\n ";  
	cout<<"\n    France , Spain , Italy , Rome.";
	cout<<"\n\n->  DATES TO VISIT : 1 july to 10 july";
	cout<<"\n\n->  STAY : 10 days and 9 nights.";	
	cout<<"\n\n->  PRICING : 8,00,000 for 2 persons.";
	cout<<"\n\n->  Hotels will be fixed by our guides, but for sure They will be 5 Star.";
		cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
		book();
			break;
		case 3: system("cls"); 
		cout<<"\n\n\t\t\t\tUNITED KINGDOM";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
	cout<<"\n\n\n\n->  Places you will get to explore in UK package are :\n\n ";  
	 cout<<"\n    London, Edinburgh, Roman, Iddylic England, Liverpool, Manchester, Cambrige and Oxford Universities."; 
	cout<<"\n\n->  DATES TO VISIT : 15 September to 21 September.";
	cout<<"\n\n->  STAY : 7 days and 6 nights.";	
	cout<<"\n\n->  PRICING : 5,00,000 for 2 persons.";
	cout<<"\n\n->  Hotels will be fixed by our guides, but for sure They will be 5 Star.";
		    cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
			book();
			break;
		case 4:system("cls"); 
		cout<<"\n\n\t\t\t\tAUSTRALIA";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"; 
	cout<<"	\n\n\n\n->  Places you will get to explore in Australia package are :\n\n ";  
	 cout<<"\n    Sydney -Opera house & bridge , Melbourne, Bondi beach, Fraser Island, Kakadu National Park,  Kimberley, Kangaroo Island."; 
	cout<<"\n\n->  DATES TO VISIT : 27 November to 3 November.";
	cout<<"\n\n->  STAY : 7 days and 6 nights.";	
	cout<<"\n\n->  PRICING : 4,50,000 for 2 persons.";
	cout<<"\n\n->  Hotels will be fixed by our guides, but for sure They will be 5 Star.";
		cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
			book();
			break;
		case 5:  system("cls"); 
		cout<<"\n\n\t\t\t\tMALDIVES";
	cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"; 
	cout<<"	\n\n\n\n->  Places you will get to explore in Maldives package are :\n\n ";  
	 cout<<"\n    Atoll Transfer, Male, Hukuru Miskiiy, National Museum, Artificial Beach, Sultan Park, Hulhumale Beach, Banana Reef,   Alimatha Island, Kanuhura Island, Madive Victory, Presidential Palace.";
	cout<<"\n\n->  DATES TO VISIT : 10 December to 16 December.";
	cout<<"\n\n->  STAY : 7 days and 6 nights.";	
	cout<<"\n\n->  PRICING : 2,50,000 for 2 persons.";
	cout<<"\n\n->  Hotels will be fixed by our guides, but for sure They will be 5 Star.";
			cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
			book();
			break;
		default:system("cls");
	}
    }
}
void mainmenu::mm1()
{
	int ch;
	title();
	cout<<"\n\n\nSelect destinations you want to explore :\n";
	cout<<"\n1.India \n2.Foreign Countries \n3.About us \n4.Exit";
	cout<<"\n\nEnter your respective choices :";
	cin>>ch;
	switch(ch)
	{
		case 1: system("cls");
		    india();
			break;
		case 2:system("cls");
		    fc();
			break;
		case 3:system("cls");
		ab();
		   about();
			break;
		case 4:system("cls"); 
		    title();
		    cout<<"\n\n\n\t\t\t\t\t  Thank You for Exploring..!!";
			break;
		default:system("cls"); mm1();
	}
}

void mainmenu::about()
{
	int ch;	
	cout<<"\n\nPress 1 to Return to mainmenu :";
	cin>>ch;
	system("cls");
	if(ch==1)
    	mm1();												
}
void mainmenu::bookingfunction()
{
	
	char ch,d,ch2,ch4,ch6;
	int id,i=0,j=0,n,ch1,ch3,choice,mobno,accno,n1,flag=0;
	float cgst,sgst,amount;
	long int finaltotal,total;
	int cityid[10]={1,2,3,4,5,6,7,8,9,10};
	string citynm[10]={"KASHMIR","GOA","RAJASTHAN","KERELA","UTTAR PRADESH","USA","EUROPE","UNITED KINGDOM","AUSTRALIA","MALDIVES"};
	int citypp[10]={50000,30000,35000,39000,42000,900000,800000,500000,450000,250000 };
	int order[1];
	    n=acceptdetails();

			
	cout<<"\nEnter The City Code U Want to Do Booking For:";
	cin>>id;
	getch();
	system("cls");
	order[j]=id;
	j++;
	displaydetails();
	cout<<"\n\nSTATE ID\tSTATE NAME\tPRICE";
	for(i=0;i<j;i++)
	{
		cout<<"\n"<<cityid[order[i]-1]<<"\t\t"<<citynm[order[i]-1]<<"\t\t"<<citypp[order[i]-1];
	cout<<"\n";
try
{

	if(n==1)
	{
		total=citypp[order[i]-1]/2;
	}
		else if(n==2)
		{
			
			total=citypp[order[i]-1];
		}
		else if(n==0)
		{
			
			throw n;
		}
		
		else
		{
			
			n1=citypp[order[i]-1]/2;
			total=n1*n;
		}
	}
	catch(int n)
	{
			cout<<"\nexception";
			flag=1;
		cout<<"\nplease enter valid no of people";
	getch();
			system("cls"); 
	bookingfunction();
	
	}

}	
if(flag==0)
{
	cgst=total*0.12;
	sgst=total*0.12;
	finaltotal=total+cgst+sgst;
	cout<<"\nTotal Without Inclucing Tax :"<<total;
	cout<<"\n\nTaxes we added :";
	cout<<"\nCgst :0.12%\nSgst :0.12%";
	cout<<"\n\nFinal Amount Including Tax :"<<finaltotal;
	cout<<"\n\nDo U Want To Continue With Payment Mode And Confirm Your Booking Enter p:";
	cin>>ch2;
	system("cls");
	if(ch2=='p')
	{
		cout<<"\n-----------PAYMENT MODE------------------";
	cout<<"\n\n1-Google Pay\n2-Bank Transfer";
	cout<<"\n------------------------------------------";
	cout<<"\n\nEnter Your Choice Of Payment : ";
	cin>>choice;
	switch(choice)
	{
	case 1:do
	{
	
	cout<<"\nEnter The Mobile no:(959511111):";
		cin>>mobno;
		if(mobno==959511111)
		{
			do
			{
			
	cout<<"\nEnter the amount you want to pay to travitude ("<<finaltotal<<") :";
		cin>>amount;
		if(amount==finaltotal)
		{
			cout<<"\nSuccessfully completed with the payment!";
			cout<<"\n\nWe have forwarded all the details to your email id provided & also all the flight details are forwarded to the same.";
           cout<<"\nTHANK YOU !";		
		getch();
		system("cls");
			break;
			}//amount if	
			
			
				cout<<"\nEntered wrong amount";
		
		cout<<"\nWant to reenter the amount press 1 :";

			cin>>choice;
			getch();
		system("cls");
		}while(choice==1);
		break;
		}//mob if
	
			cout<<"\nEntered wrong number";
			
		
		cout<<"\nEnter 1 to reenter the mobile no :";
		cin>>choice;
		getch();
		system("cls");
	}while(choice==1);
mm1();
		break;
		case 2:do
		{
		cout<<"\nAccount no:123456789";
		cout<<"\nEnter The Account no :";
		cin>>accno;
		if(accno==123456789)
		{
			do
			{
			
		cout<<"\nEnter the amount you want to pay to travitude ("<<finaltotal<<") :";
		cin>>amount;
		if(amount==finaltotal)
		{
		cout<<"\nSuccessfully completed with the payment!";
			cout<<"\n\nWe have forwarded all the details to your email id provided & also all the flight details are forwarded to the same.";
		cout<<"\nTHANK YOU !";	
		getch();
		system("cls");
			break;
		}//amount if	
			
			
				cout<<"\nEntered wrong amount";
			//amount else
			cout<<"\nWant to reenter the amount enter 1:";
			cin>>choice;
			getch();
		system("cls");
		}while(choice==1);
		
		break;
		}//mob if
	
			cout<<"\nEntered wrong  account number";
			
		
		cout<<"\nEnter 1 to reenter the account no :";
		cin>>choice;
		getch();
		system("cls");
		}while(choice==1);
		mm1();
			break;
		}	//switch gogle pay
	}///second if p
	else
	{
		cout<<"\nWe bought you to the homepage:";
		system("cls");
		mm1();
	}
	//first if b		

}
}

void login();
void registr();
void forgot();
int main()
{
	char ch6;
	char ch7;
	int choice;
        cout<<"***********************************************************************\n\n";
        cout<<"                      WELCOME  TO  TRAVITUDE                              \n";
        cout<<"                   wonder - explore - discover                             \n";
        cout<<"\n*******************         MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.FORGOT PASSWORD (or) USERNAME"<<endl;
        cout<<"4.HOMEPAGE"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:
                       system("cls");
                       break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl; 
                        main();
        }
        mainmenu m;	
m.mm1();
cout<<"\n\n----------------------THANK YOU-----------------------";
cout<<"\n-----------------------VISIT AGAIN----------------------";
   return 0;     
}

void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"\nPlease enter the following details : "<<endl;
        cout<<"\nUSERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;
         
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
        
                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello "<<user<<"\nLOGIN SUCCESS!\n\nWe're glad that you're here!\nThanks for logging in.\n";
                cin.get();
                cin.get();
                getch();
                 system("cls");
                main();
                
        }
        else
        { 
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                 getch();
				 system("cls");
				main();
        }
}

void registr()
{
        
        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"\nEnter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;
        
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        
        cout<<"\n\nRegistration Sucessful!\n";
        getch();
        system("cls");
        main();
        
        
}

void forgot()
{
        int ch;
        system("cls");
        cout<<"\nForgotten ? We're here for help : \n";
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Search your id by password"<<endl;
        cout<<"3.Main menu"<<endl;
        cout<<"\nEnter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuser;
                        
                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nHurray!, account found\n";
                                cout<<"\nYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact our system administrator for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass;
                        
                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }       
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found in the database \n";
                                cout<<"\nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"\nSorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact our administrator for more information\n";
                                cin.get();
                                cin.get();
                                main();
                        }
                
                        break;
                }
                
                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        forgot();
        }
}
	//Thankyou...
	
	
