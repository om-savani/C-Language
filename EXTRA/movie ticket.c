#include<stdio.h>
#define P printf

main()
{
	int n,a,b,c=0;
	
	P("!! Welcome to Friday cinema !!\n");
	P("\n\n1. for Hollywood\n");
	P("2. for Bollywood\n");
	P("3. for Tollywood\n\n");
	
	P("Enter your choiice :");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			
			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					P("\n\n1. for The Nun\n");
					P("2. for The Conjuring\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: The Nun\n");
							P("Prize\t\t: 400 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: The Conjuring\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
									
				case 2:
					P("\n\n1. for Ted\n");
					P("2. for Good boys\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: The Ted\n");
							P("Prize\t\t: 300 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: Good Boys\n");
							P("Prize\t\t: 350 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						default:
							P("Invalid input");
				    }
				break;
				
				case 3:
					P("\n\n1. for The Prestige\n");
					P("2. for The Parasite\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: The Prestige\n");
							P("Prize\t\t: 500 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: The Parasite\n");
							P("Prize\t\t: 400 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
				
				default :
					P("\n\nInvalid choice");
			}
			
		break;
		
		case 2:
			
			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					P("\n\n1. for Pari\n");
					P("2. for Bhoot\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: Pari\n");
							P("Prize\t\t: 400 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: Bhoot\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
									
				case 2:
					P("\n\n1. for Welcome\n");
					P("2. for 3 Idiots\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: Welcome\n");
							P("Prize\t\t: 300 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: 3 Idiots\n");
							P("Prize\t\t: 350 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						default:
							P("Invalid input");
				    }
				break;
				
				case 3:
					P("\n\n1. for IB71\n");
					P("2. for Ugly\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: IB71\n");
							P("Prize\t\t: 500 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: Ugly\n");
							P("Prize\t\t: 400 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
				
				default :
					P("\n\nInvalid choice");
			}
			
		break;
		
		case 3:
			
			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					P("\n\n1. for Cold Case\n");
					P("2. for 13B\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: Cold Case\n");
							P("Prize\t\t: 400 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: 13B\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
									
				case 2:
					P("\n\n1. Bro\n");
					P("2. for Ready\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: Bro\n");
							P("Prize\t\t: 300 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: Ready\n");
							P("Prize\t\t: 350 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						default:
							P("Invalid input");
				    }
				break;
				
				case 3:
					P("\n\n1. for HIT\n");
					P("2. for The Trap\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: HIT\n");
							P("Prize\t\t: 500 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: The Trap\n");
							P("Prize\t\t: 400 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
				
				default :
					P("\n\nInvalid choice");
			}
			
		break;
		
		default:
			P("\n\n!! Invalid Input,Please Try Again !!");
	}
	
}
