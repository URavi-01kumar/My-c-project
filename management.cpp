
  #include<iostream>



using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];

int total=0;

void enter()

{

		int ch=0;

			cout<<"How many students do u want to enter??"<<endl;

			cin>>ch;

			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

			{

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"Enter name ";

				cin>>arr1[i];

				cout<<"Enter Roll no ";

				cin>>arr2[i];

				cout<<"Enter course ";

				cin>>arr3[i];

				cout<<"Enter class ";

				cin>>arr4[i];

				cout<<"Enter contact ";

				cin>>arr5[i];

				

			}

	    	}

	    	else

	    	{

	    		

	    		for(int i=total;i<ch+total;i++)

			{

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"Enter name ";

				cin>>arr1[i];

				cout<<"Enter Roll no ";

				cin>>arr2[i];

				cout<<"Enter course ";

				cin>>arr3[i];

				cout<<"Enter class ";

				cin>>arr4[i];

				cout<<"Enter contact ";

				cin>>arr5[i];

			}

			total=ch+total;

			}

	

}

void show()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\nData of Student "<<i+1<<endl<<endl;

	    		cout<<"Name "<<arr1[i]<<endl;

	    		cout<<"Roll no "<<arr2[i]<<endl;

	    		cout<<"Course "<<arr3[i]<<endl;

	    		cout<<"Class "<<arr4[i]<<endl;

	    		cout<<"Contact "<<arr5[i]<<endl;

	    	    }

	    	}

}

void search()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

	string rollno;

				cout<<"Enter the roll no of student"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						cout<<"Name "<<arr1[i]<<endl;

	    	        	cout<<"Roll no "<<arr2[i]<<endl;

	    		        cout<<"Course "<<arr3[i]<<endl;

	    		        cout<<"Class "<<arr4[i]<<endl;

	    	        	cout<<"Contact "<<arr5[i]<<endl;

					}

				}

			}

}

void update()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		string rollno;

				cout<<"Enter the roll no of student which you want to update"<<endl;

				cin>>rollno;

					for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						cout<<"\nPrevious data"<<endl<<endl;

						cout<<"Data of Student "<<i+1<<endl;

						cout<<"Name "<<arr1[i]<<endl;

	    	        	cout<<"Roll no "<<arr2[i]<<endl;

	    		        cout<<"Course "<<arr3[i]<<endl;

	    		        cout<<"Class "<<arr4[i]<<endl;

	    	        	cout<<"Contact "<<arr5[i]<<endl;

	    	        	cout<<"\nEnter new data"<<endl<<endl;

							cout<<"Enter name ";

				            cin>>arr1[i];

				            cout<<"Enter Roll no ";

				            cin>>arr2[i];

			             	cout<<"Enter course ";

				            cin>>arr3[i];

				            cout<<"Enter class ";

				            cin>>arr4[i];

				            cout<<"Enter contact ";

				            cin>>arr5[i];

					}

				}

			}

		}



void deleterecord()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string rollno;

				cout<<"Enter the roll no of student which you wanted to delete"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						for(int j=i;j<total;j++)

						{

						arr1[j]=arr1[j+1];

						arr2[j]=arr2[j+1];

					    arr3[j]=arr3[j+1];

						arr4[j]=arr4[j+1];

						arr5[j]=arr5[j+1];

				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}

				 

			

			else 

			{

				cout<<"Invalid input";

			}

}

}

main()

{

	int value;

	while(true)

	{

	cout<<"\nPress 1 to enter data"<<endl;

	cout<<"Press 2 to show data"<<endl;

	cout<<"Press 3 to search data"<<endl;

	cout<<"Press 4 to update data"<<endl;

	cout<<"Press 5 to delete data"<<endl;

	cout<<"Press 6 to exit"<<endl;

	cin>>value;

	switch(value)

	{

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			update();

			break;

		case 5:

			deleterecord();

			break;

		case 6:

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

}

}
============================================================================================
	===========================================================================
	=======================================================
	in Java code
====================================================================================
import java.util.Scanner;

public class Student_management {
    static String[] arr1 = new String[20];
    static String[] arr2 = new String[20];
    static String[] arr3 = new String[20];
    static String[] arr4 = new String[20];
    static String[] arr5 = new String[20];
    static int total = 0;
    static Scanner scanner = new Scanner(System.in);

    public static void enter() {
        System.out.println("How many students do you want to enter?");
        int ch = scanner.nextInt();

        if (total == 0) {
            total = ch + total;
            for (int i = 0; i < ch; i++) {
                System.out.println("\nEnter the Data of student " + (i + 1) + "\n");
                System.out.print("Enter name: ");
                arr1[i] = scanner.next();
                System.out.print("Enter Roll no: ");
                arr2[i] = scanner.next();
                System.out.print("Enter course: ");
                arr3[i] = scanner.next();
                System.out.print("Enter class: ");
                arr4[i] = scanner.next();
                System.out.print("Enter contact: ");
                arr5[i] = scanner.next();
            }
        } else {
            for (int i = total; i < ch + total; i++) {
                System.out.println("\nEnter the Data of student " + (i + 1) + "\n");
                System.out.print("Enter name: ");
                arr1[i] = scanner.next();
                System.out.print("Enter Roll no: ");
                arr2[i] = scanner.next();
                System.out.print("Enter course: ");
                arr3[i] = scanner.next();
                System.out.print("Enter class: ");
                arr4[i] = scanner.next();
                System.out.print("Enter contact: ");
                arr5[i] = scanner.next();
            }
            total = ch + total;
        }
    }

    public static void show() {
        if (total == 0) {
            System.out.println("No data is entered");
        } else {
            for (int i = 0; i < total; i++) {
                System.out.println("\nData of Student " + (i + 1) + "\n");
                System.out.println("Name: " + arr1[i]);
                System.out.println("Roll no: " + arr2[i]);
                System.out.println("Course: " + arr3[i]);
                System.out.println("Class: " + arr4[i]);
                System.out.println("Contact: " + arr5[i]);
            }
        }
    }

    public static void search() {
        if (total == 0) {
            System.out.println("No data is entered");
        } else {
            System.out.println("Enter the roll no of student");
            String rollno = scanner.next();
            for (int i = 0; i < total; i++) {
                if (rollno.equals(arr2[i])) {
                    System.out.println("Name: " + arr1[i]);
                    System.out.println("Roll no: " + arr2[i]);
                    System.out.println("Course: " + arr3[i]);
                    System.out.println("Class: " + arr4[i]);
                    System.out.println("Contact: " + arr5[i]);
                }
            }
        }
    }

    public static void update() {
        if (total == 0) {
            System.out.println("No data is entered");
        } else {
            System.out.println("Enter the roll no of student which you want to update");
            String rollno = scanner.next();
            for (int i = 0; i < total; i++) {
                if (rollno.equals(arr2[i])) {
                    System.out.println("\nPrevious data\n");
                    System.out.println("Data of Student " + (i + 1));
                    System.out.println("Name: " + arr1[i]);
                    System.out.println("Roll no: " + arr2[i]);
                    System.out.println("Course: " + arr3[i]);
                    System.out.println("Class: " + arr4[i]);
                    System.out.println("Contact: " + arr5[i]);
                    System.out.println("\nEnter new data\n");
                    System.out.print("Enter name: ");
                    arr1[i] = scanner.next();
                    System.out.print("Enter Roll no: ");
                    arr2[i] = scanner.next();
                    System.out.print("Enter course: ");
                    arr3[i] = scanner.next();
                    System.out.print("Enter class: ");
                    arr4[i] = scanner.next();
                    System.out.print("Enter contact: ");
                    arr5[i] = scanner.next();
                }
            }
        }
    }

    public static void deleteRecord() {
        if (total == 0) {
            System.out.println("No data is entered");
        } else {
            System.out.println("Press 1 to delete all record");
            System.out.println("Press 2 to delete specific record");
            int a = scanner.nextInt();

            if (a == 1) {
                total = 0;
                System.out.println("All records are deleted..!!");
            } else if (a == 2) {
                System.out.println("Enter the roll no of student which you want to delete");
                String rollno = scanner.next();
                for (int i = 0; i < total; i++) {
                    if (rollno.equals(arr2[i])) {
                        for (int j = i; j < total; j++) {
                            arr1[j] = arr1[j + 1];
                            arr2[j] = arr2[j + 1];
                            arr3[j] = arr3[j + 1];
                            arr4[j] = arr4[j + 1];
                            arr5[j] = arr5[j + 1];
                        }
                        total--;
                        System.out.println("Your required record is deleted");
                    }
                }
            } else {
                System.out.println("Invalid input");
            }
        }
    }

    public static void main(String[] args) {
        int value;
        while (true) {
            System.out.println("\nPress 1 to enter data");
            System.out.println("Press 2 to show data");
            System.out.println("Press 3 to search data");
            System.out.println("Press 4 to update data");
            System.out.println("Press 5 to delete data");
            System.out.println("Press 6 to exit");
            value = scanner.nextInt();

            switch (value) {
                case 1:
                    enter();
                    break;
                case 2:
                    show();
                    break;
                case 3:
                    search();
                    break;
                case 4:
                    update();
                    break;
                case 5:
                    deleteRecord();
                    break;
                case 6:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid input");
                    break;
            }
        }
    }
}
