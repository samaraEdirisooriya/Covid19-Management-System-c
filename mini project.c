#include<string.h>
#include<time.h>
#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
int password();//
int compare();//
int doctor();
int nurse();
void logstatement();//
int exits();
void analyze_data();//
int status();
int pos;
char id[20];

//Showing the home screen************************************************************************************************************************************
int main (){
    system("cls");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t@@@@@@@@@@  @@@@@@@@@@  @@@@     @@@@  @@@@  @@@@@@@@@@\n");
    printf("\t\t@@@@@@@@@@  @@@@@@@@@@  @@@@     @@@@  @@@@  @@@@@@@@@@@\n");
    printf("\t\t@@@@        @@@@  @@@@  @@@@     @@@@  @@@@  @@@@     @@@\n");
    printf("\t\t@@@@        @@@@  @@@@  @@@@     @@@@  @@@@  @@@@      @@@\n");
    printf("\t\t@@@@        @@@@  @@@@  @@@@     @@@@  @@@@  @@@@      @@@\n");
    printf("\t\t@@@@        @@@@  @@@@   @@@@   @@@@@  @@@@  @@@@      @@@   @@@@  @@@@@@\n");
    printf("\t\t@@@@        @@@@  @@@@    @@@@  @@@@   @@@@  @@@@      @@@  @@@@@  @@  @@\n");
    printf("\t\t@@@@        @@@@  @@@@     @@@@@@@@    @@@@  @@@@     @@@    @@@@  @@@@@@\n");
    printf("\t\t@@@@@@@@@@  @@@@@@@@@@      @@@@@@     @@@@  @@@@@@@@@@@     @@@@     @@@\n");
    printf("\t\t@@@@@@@@@@  @@@@@@@@@@       @@@@      @@@@  @@@@@@@@@@     @@@@@@  @@@@@\n");
    printf("\n\t\tManagement System.");
    printf("\n\t\t_______________________________________________________________________\n");
    printf("\n\t\t_________________Who you log into our system as ?______________________\n");
    printf("\n\t\t  1 >Doctor \n\t\t  2 >Nurse \n\t\t  3 >Patient \n\t\t  4 >Emergency services \n\t\t  5 >Exit \n");
    printf("\n\t\t\t >>>>>>Enter selected Number: ");

    scanf("%d",&pos);
    if (pos==1)password(1);
else if (pos==2){
        password(2);
    }else if (pos==3){
        patient();

    }else if (pos==4){
        emergency_service();
    }else if(pos==5){
        exits();
    }else{
        system("cls");
        printf("\n\n\n\n");
        printf("\n\n");
            printf("\n\t\tWARNING: \n");
        printf("\n\t\t _____________________________________________");
        printf("\n\t\t|                                             |");
        printf("\n\t\t|       Enter selected Number correctly!      |");
        printf("\n\t\t|_____________________________________________|");
        printf("\n\n");
        printf("\n\t\tPress ENTER key to go Home.\n");
        _getch();
        system("cls");
        main();  }
return 0;}

// Security function ********************************************************************************************
int password(){

   char userid_list[20];
   char pass_list[20];
   char pass[20];
   int count=0;
   int i=0;
   int value;
   int value1;
   int l;
   FILE*file;
   FILE*file1;
   int c2;
    system("cls");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n\t\t ___________________________\n");
    printf("\t\t|___________________________|\n");
    printf("\n\t\t Enter Hospital Id Number : ");
    scanf("%s",id);
    system("cls");
    file=fopen("s.txt","r");
      if (file==NULL){
            system("cls");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n\t\tWARNING: \n");
            printf("\n\t\t _____________________________________________ ");
            printf("\n\t\t|                                             |");
            printf("\n\t\t|       Some System files are missing!...     |");
            printf("\n\t\t|_____________________________________________|");
            printf("\n\n\n\n");
            printf("\n\t\tPress ENTER key to go Home.\n");
            _getch();
            system("cls");
            main();
     }else{

     while(i!=1){
        fgets(userid_list,100, file);
        count++;
        int value= compare(id,userid_list);
        if(value==0){
                char dy=strlen(userid_list);

                if(strlen(id)==strlen(userid_list)-1){
                        for (c2=0; c2<=2;c2++){

                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n\t\t  ____________________________");
                        printf("\n\t\t |___%d Attempts remaining...__| ",3-c2);
                        printf("\n\n\t\t  Enter Password :");
                        i=1;
                        fclose(file);
                        scanf("%s",pass);
                        file1=fopen("p.txt","r");
                                if (file==NULL){

                                        printf("\n");
                                        printf("\n");
                                        printf("\n");
                                        printf("\n\t\tWARNING: \n");
                                        printf("\n\t\t _____________________________________________ ");
                                        printf("\n\t\t|                                             |");
                                        printf("\n\t\t|       Some System files are missing!...     |");
                                        printf("\n\t\t|                                             |");
                                        printf("\n\t\t|_____________________________________________|");
                                        printf("\n\n\n\n");
                                        printf("\n\t\tPress ENTER key to go Home.\n");
                                        _getch();
                                        system("cls");
                                        main();
                                    }
                                else{
                                for(l=1;l<=count;l++){
                                        fgets(pass_list,100, file1);
                                    }
                                int value1= compare(pass,pass_list);
                                if(value1==0){
                                        if(strlen(pass)==strlen(pass_list)-1){
                                           system("cls");
                                            printf("\n");
                                            printf("\n");
                                            printf("\n");
                                            printf("\n\t\t    @       __________________________________________________     @   ");
                                            printf("\n\t\t  @@@      |                                                  |    @@  ");
                                            printf("\n\t\t @@@@      |     Welcome ! You have Successfully logged in.   |    @@@@ ");
                                            printf("\n\t\t@@@@@      |__________________________________________________|    @@@@@");
                                            if (pos==1)doctor();
                                            else nurse();
                                        }
                                        else{
                                           system("cls");
                                    printf("\n");
                                    printf("\n");
                                    printf("\n");
                                    printf("\n\t\tWARNING: \n");
                                    printf("\n\t\t _____________________________________________ ");
                                    printf("\n\t\t|                                             |");
                                    printf("\n\t\t|            Invalid Password....!           |");
                                    printf("\n\t\t|_____________________________________________|");
                                                }}
                                else{
                                    system("cls");
                                    printf("\n");
                                    printf("\n");
                                    printf("\n");
                                    printf("\n\t\tWARNING: \n");
                                    printf("\n\t\t _____________________________________________ ");
                                    printf("\n\t\t|                                             |");
                                    printf("\n\t\t|            Invalid Password....!           |");
                                    printf("\n\t\t|_____________________________________________|");

                                           }}
                }                   system("cls");
                                    printf("\n");
                                    printf("\n");
                                    printf("\n");
                                    printf("\n\t\tWARNING: ");
                                    printf("\n\t\t _____________________________________________");
                                    printf("\n\t\t|                                             |");
                                    printf("\n\t\t|        Maximum login attempts exceeded.     |");
                                    printf("\n\t\t|        Please try again later.              |");
                                    printf("\n\t\t|_____________________________________________|");

                                    printf("\n\n\n\t\t Press ENTER key to go Home :\n");
                                    _getch();
                                    system("cls");
                                    main();
                                            }
                else{
                        system("cls");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n\t\tWARNING: ");
                        printf("\n\t\t _______________________________________________");
                        printf("\n\t\t|                                               |");
                        printf("\n\t\t| Invalid hospital id or entered hospital id(%s)",id);
                        printf("\n\t\t|    not in the system. (please contact nurse)  |");
                        printf("\n\t\t|_______________________________________________|");

                        printf("\n\n\n\t\t Press ENTER key to go Home :\n");
                        _getch();
                        }}
        else if(feof(file)){
            i=1;
            system("cls");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n\t\tWARNING: ");
                        printf("\n\t\t _______________________________________________");
                        printf("\n\t\t|                                               |");
                        printf("\n\t\t| Invalid hospital id or entered hospital id(%s)",id);
                        printf("\n\t\t|    not in the system. (please contact nurse)  |");
                        printf("\n\t\t|_______________________________________________|");

                        printf("\n\n\n\t\t Press ENTER key to go Home :\n");
                        _getch();
                         system("cls");
                        main();
           }}}
 return 0;}


//Compare the two strings function******************************************************
 int compare(char a[],char b[]){
    int flag=0,i=0;
        while(a[i]!='\0'&&b[i]!='\0')
    {
       if(a[i]!=b[i])
       {
           flag=1;
           break;
       }
       i++;
    }if(flag==0)
    return 0;
    else
    return 1;}


//doctor function***************************************************************
int doctor(){
        system("cls");
        time_t now=time(NULL);
        char *string_now= ctime(&now);
        FILE*em_doc;
        FILE*status_wx;
        char ftr[20];
        char c[20];
        int p_id;
        char p_num[5];
        FILE* put_remove;
        int loop_2;
        char put_status[50];



        printf("\n");
        printf("\n\t\t  _________________________");
        printf("\n\t\t |________DOCTOR___________| ");
        printf("\n\n\t\t Doctor Id Number:    %s",id);
        printf("\n\t\t Time & Date:         %s",string_now);


        em_doc=fopen("emergency_services.txt","r");

        fgets(ftr,20,em_doc);
        printf("\t\t\t\t  ___________________________________________");
        printf("\n\t\t\t\t | Number of patients currently in the ward:_|_%s",ftr);
        fgets(ftr,20,em_doc);
        printf("\t\t\t\t | Number of patients remaining in ICU:______|_%s",ftr);
        fgets(ftr,20,em_doc);
        printf("\t\t\t\t | Number of cured patients:_________________|_%s",ftr);
        fgets(ftr,20,em_doc);
        printf("\t\t\t\t | Number of available Ambulance:____________|_%s",ftr);
        fgets(ftr,20,em_doc);
        printf("\t\t\t\t | Number of available ICU beds:_____________|_%s",ftr);
        fgets(ftr,20,em_doc);
        printf("\t\t\t\t | Number of available oxygen tanks:_________|_%s",ftr);
        printf("\n\t\t\t\t |___________________________________________|");

        printf("\n\n\t\t 1 > Go to Patients.\n\t\t 2 > Go to Main menu. \n\t\t 3 > Exit \n\n\t\t\t >>>>> Enter selected Number : ");
        fclose(em_doc);
        scanf("%d",&p_id);
        if (p_id==1){
        system("cls");
        printf("\n\t\t _______________________");
        printf("\n\t\t|_______________________|");
        printf("\n\t\t Enter Patients Number: ");
        scanf("%s",p_num);

         strcat(p_num,".txt");
         logstatement(p_num);
}
        else if (p_id ==2)main();
        else {
        exits();}

   return 0;
    }
// Change of patient status on report card ***********************************************************************
int status(char a[]){
           char sta[10];
            char s[]="1";
            char s2[]="2";
            FILE*status;
            status=fopen(a,"r");
            if (status!=NULL){
                fgets(sta,10,status);
            if(strcmp(s, sta) == 0)return 1;
            else if (strcmp(s2, sta) == 0 ) return 2;
            else return 3;
            }else return 3;
            fclose(status);
}
// function of nurse********************************************************************
int nurse(){
        time_t now=time(NULL);
        char *string_now= ctime(&now);
        FILE* put_file;
        FILE* put_filechake;

        FILE* cerate_num_file;
        FILE* file_test;
        FILE* account;
        FILE* account_2;
        FILE*em2;
        int n_report;
        char phone[50];
        char p_num[20];
        char blood2[2];
        char hart2[3];
        char user_pass[50];
        char report[50];
        char temp2[3];
        char press2[3];
        char cerate_num[10];
        char name[100];
        char nm_tr[20];
        char address[20];
        char status[50];
        char age[50];
        char user[50];
        int em;
        int n;
        int s;
        int m;int j;
        int l;
        char amb[10];
        char amb2[10];
        printf("\n");
        printf("\n\t\t  _________________________");
        printf("\n\t\t |_________NURSE___________| ");
        printf("\n\n\t\t Nurse Id Number:    %s",id);
        printf("\n\t\t Time & Date:         %s",string_now);
        printf("\n\n");
        printf("\n\t\t 1 > Entering the patient's health situation into the Report card.");
        printf("\n\t\t 2 > Create Account for the patient..");
        printf("\n\t\t 3 > Create Account for Doctor or Nurse.");
        printf("\n\t\t 4 > update emergency service list.");
        printf("\n\t\t 5 > Back to Main Menu.");
        printf("\n\t\t 6 > Exit.");
        printf("\n\n\t\t\t >>>>>>>>>>>Enter selected Number: ");

        scanf("%d",&n_report);
        if (n_report==1){
            system("cls");
            printf("\n\t\t __________________________________________________________________");
            printf("\n\t\t|__Entering the patient's health situation into the report card.___|");
            printf("\n\n");
            printf("\t\t\t Enter patient Number: ");
            scanf("%s",p_num);
            strcat(p_num,".txt");
            put_filechake= fopen(p_num,"r");
            if (put_filechake==NULL){
               system("cls");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n\t\tWARNING: ");
                        printf("\n\t\t _______________________________________________");
                        printf("\n\t\t|                                               |");
                        printf("\n\t\t|         No patient has entered our system     |");
                        printf("\n\t\t|    with this number. (please contact nurse)   |");
                        printf("\n\t\t|_______________________________________________|");

                        printf("\n\n\n\t\t Press ENTER key to go Home :\n");
                        _getch();
                         system("cls");
                        nurse();
            }else{
            fclose(put_filechake);
            put_file= fopen(p_num,"a");
            fputs("\n   _______________________",put_file);
            fputs("\n  |____Helth situation____|",put_file);
            fputs(string_now,put_file);
            fputs("\n",put_file);
            char blood[60]="  | avg. Blood oxygen level  |  Spo2- ";
            printf("\n\n\t\t ~Enter blood oxygen level %(Spo2) :");
            scanf("%s",blood2);
            strcat(blood,blood2);
            strcat(blood,"%\n");
            fputs(blood,put_file);
            char hart[60]="  | avg. Hart rate           | PRbpm- ";
            printf("\n\n\t\t ~Enter hart rate (PRbpm)          :");
            scanf("%s",hart2);
            strcat(hart,hart2);
            strcat(hart,"\n");
            fputs(hart,put_file);
            char temp[60]="  | Body temperature         |     F- ";
            printf("\n\n\t\t ~Enter Body temperature (F)       :");
            scanf("%s",temp2);
            strcat(temp,temp2);
            strcat(temp,"\n");
            fputs(temp,put_file);
            char press[60]="  | Blood pressure           | mm Hg- ";
            printf("\n\n\t\t ~Enter Blood pressure (mm Hg)     :");
            scanf("%s",press2);
            strcat(press,press2);
            strcat(press,"\n");
            fputs(press,put_file);
            system("cls");
            printf("\n\n\t\t  _________________________________");
            printf("\n\t\t |____Successfully updated...!!____|");
            fclose(put_file);
            nurse();
            }}
         if (n_report==2){
                system("cls");
                printf("\n\t\t _______________________________________");
                printf("\n\t\t|______Create Account for patient.______|");
                printf("\n\n");
                printf("\n\t\t\tCreate patient number: ");
             scanf("%s",cerate_num);
             strcat(cerate_num,".txt");
             file_test=fopen(cerate_num,"r");
             if (file_test!=NULL)
             {
                  system("cls");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n\t\tWARNING: ");
                        printf("\n\t\t ___________________________________");
                        printf("\n\t\t|                                   |");
                        printf("\n\t\t|     Entered patient number        |");
                        printf("\n\t\t|       is already exited....!!!    |");
                        printf("\n\t\t|___________________________________|");

                        printf("\n\n\n\t\t Press ENTER key to go Home :\n");
                        _getch();
                         system("cls");
                         nurse();
             }else {
                cerate_num_file=fopen(cerate_num,"w");
                 system("cls");
                printf("\n\t\t _________________________________________");
                printf("\n\t\t|______Fill the Patient Information.______|");
                printf("\n\n");
                printf("\n\t\t\t ~Enter patient Name (Enter with single line): ");
                fputs(cerate_num,cerate_num_file);
                fflush(stdin);
                fgets(name,50,stdin);
                fputs("\n",cerate_num_file);
                fputs(name,cerate_num_file);
                fflush(stdin);
                printf("\n\t\t\t ~Enter Patent's address (Enter with single line) :");
                fgets(address,50,stdin);
                fputs(address,cerate_num_file);
                printf("\n\t\t\t ~Enter Patent's age :");
                fflush(stdin);
                fgets(age,50,stdin);
                fputs(age,cerate_num_file);
                printf("\n\t\t\t ~Enter Phone number :");
                fflush(stdin);
                fgets(phone,50,stdin);
                fputs(phone,cerate_num_file);
                system("cls");
                printf("\n\n\t\t  _________________________________");
                printf("\n\t\t |____Successfully updated...!!____|");
                fclose(file_test);
                fclose(cerate_num_file);
                 analyze_data(0,10,1);
                 nurse();
             }}
             if (n_report==3){
                 system("cls");
                 printf("\n\n");
                printf("\n\t\t _______________________________________________");
                printf("\n\t\t|______Create Account for Doctors & Nurse.______|");
                printf("\n\n");

                account= fopen("s.txt","a");
                account_2= fopen("p.txt","a");
                if (account==NULL&&account_2==NULL){
                                        system("cls");
                                        printf("\n");
                                        printf("\n");
                                        printf("\n");
                                        printf("\n\t\tWARNING: \n");
                                        printf("\n\t\t _____________________________________________ ");
                                        printf("\n\t\t|                                             |");
                                        printf("\n\t\t|       Some system files are missing!...     |");
                                        printf("\n\t\t|                                             |");
                                        printf("\n\t\t|_____________________________________________|");
                                        printf("\n\n\n\n");
                                        printf("\n\t\tPress ENTER key to go Home.\n");
                                        _getch();
                                        system("cls");
                                        nurse();

                }else{
                 printf("\n\t\t\t Enter Doctor or Nurse Id:");
                 scanf("%s",user);

                 fputs(user,account);
                 fputs("\n",account);
                 printf("\n\t\t\t Create Password :");
                 scanf("%s",user_pass);

                 fputs(user_pass,account_2);
                 fputs("\n",account_2);
                 fclose(account);
                 fclose(account_2);
                 system("cls");
                 printf("\n\n\t\t  _________________________________________");
                 printf("\n\t\t |____Account Successfully Created...!!____|");
                   nurse();

                }
             }
             if (n_report==4){
                    system("cls");
                     printf("\n\n");
                    printf("\n\t\t _________________________________________");
                    printf("\n\t\t|______Update Emergency Service list.______|");
                    printf("\n\t\t 1 > Add oxygen tanks to the stroke.");
                     printf("\n\t\t 2 > Update available ambulance.");
                    printf("\n\t\t 3 > Back to main menu.");
                    printf("\n\t\t 4 > Exit.");
                    printf("\n\t\t\t  >>>>>>>> Enter selected Number: ");
                scanf("%d",&em);
                if(em==1){
                system("cls");
                printf("\n\n");
                printf("\n\t\t Add oxygen tanks to the stroke:");
                scanf("%d",&n);
                    analyze_data(5,10,n);
                    system("cls");
                    printf("\n\n\t\t  _________________________________");
                    printf("\n\t\t |____Successfully updated...!!____|");
                    nurse();
                }
                else if(em==2){
                    em2=fopen("emergency_services.txt","r");
                    if (em2==NULL){
                                system("cls");
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n\t\tWARNING: \n");
                                printf("\n\t\t _____________________________________________ ");
                                printf("\n\t\t|                                             |");
                                printf("\n\t\t|       Some system files are missing!...     |");
                                printf("\n\t\t|                                             |");
                                printf("\n\t\t|_____________________________________________|");
                                printf("\n\n\n\n");
                                printf("\n\t\tPress ENTER key to go Home.\n");
                                _getch();
                                system("cls");
                                nurse();}
                    else{
                    for(l=0;l<=3;l++){
                            fgets(amb,10,em2);

                    }}
                    system("cls");
                     printf("\n\n");
                    printf("\n\t\t ____________________________________________________");
                    printf("\n\t\t     Number of ambulance currently available : %s ",amb);
                    fclose(em2);
                    printf("\n\n\t\t\t 1 > Add. \n\t\t\t 2 > Subtract. \n\t\t\t\t >>>>>>>> Enter selected number:");
                    scanf("%d",&s);
                    if (s==1){
                        system("cls");
                        printf("\n\n\n\t\t\t >>>>>>Enter number:");
                        scanf("%d",&m);
                        analyze_data(3,10,m);
                        system("cls");
                    printf("\n\n\t\t  _________________________________");
                    printf("\n\t\t |____successfully updated...!!____|");
                    nurse();}
                    else{
                        system("cls");
                        printf("\n\n\n\t\t\t >>>>>Enter number:");
                        scanf("%d",&j);
                        analyze_data(3,11,j);
                        system("cls");
                    printf("\n\n\t\t  _________________________________");
                    printf("\n\t\t |____successfully updated...!!____|");
                    nurse();
                    }

                }else if(em==3)main();
             else return 1;
             }if(n_report==5)main();
             else exits();}


// Function of patient*****************************************************************************
int patient(){
    char p_num[50];
    FILE*p_file;
    char pat[100];
    char temp[50]="temp";
    int num;
    int k=0;
    int desl;
    printf("\n");
        system("cls");
         printf("\n\n\t\t  _________________________________");
         printf("\n\t\t |_______Patient Report Card.______|");
        printf("\n\n\n");
        printf("\t\t\t >>>>>>Enter patients number: ");
        scanf("%s",p_num);
         strcat(p_num,".txt");
         strcat(temp,p_num);
        p_file=fopen(p_num,"r");
        if (p_file==NULL){
                 system("cls");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n\t\tWARNING: \n");
                printf("\n\t\t ________________________________________________________ ");
                printf("\n\t\t|                                                        |");
                printf("\n\t\t| Invalid patients number or entered patients number(%s)",p_num);
                printf("\n\t\t|           not in the system. (please contact nurse)    |");
                printf("\n\t\t|________________________________________________________|");
                printf("\n\n\n\n");
                printf("\n\t\tPress ENTER key to go Home.\n");
                _getch();
                system("cls");
            patient();}

         system("cls");
        printf("\n\t\t     @@@@@@@@     ");
        fgets(pat,50,p_file);
        printf("\n\t\t     @@@@@@@@           PATIENT NUMBER: %s",pat);
        fgets(pat,50,p_file);
        printf("  \t\t@@@@@@@@@@@@@@@@@@      NAME:           %s",pat);
        fgets(pat,50,p_file);
        printf("  \t\t MEDICAL REPORT         ADDRESS:        %s",pat);
        fgets(pat,50,p_file);
        printf("  \t\t@@@@@@@@@@@@@@@@@@      AGE:            %s",pat);
        fgets(pat,50,p_file);
        printf("  \t\t     @@@@@@@@           Phone NUMBER:   %s",pat);
        printf("\t\t     @@@@@@@@    ");

        fgets(pat,50,p_file);
        desl=status(temp);
        if(desl==1){
                printf(" \n\t\t   __________________ ");
                printf(" \n\t\t  |__Patient Status__|  in the ICU ");

        }
        if(desl==2){
                printf(" \n\t\t   __________________ ");
                printf(" \n\t\t  |__Patient Status__|  discharged from the hospital ");}
        if(desl==3){
                printf(" \n\t\t   __________________ ");
                printf(" \n\t\t  |__Patient Status__|  Currently in the ward ");}
                printf("\n\n\n-----------------LOG STATMENT---------------------------------------------------------");
        printf("\n");
        while(k!=1){
            fgets(pat,50,p_file);
            printf("%s",pat);
           if(feof(p_file)){
            k=1;
           }
        }
        printf("\n-------------------------------------------------------------------------------------------");
        fclose(p_file);

         printf("\n\n\t\t\t 1 > Go to Main Menu. \n\t\t\t 2 > Exit \n\n\t\t\t\t >>>>>>>>>>> Enter selected number :");
        scanf("%d",&num);
        if (num==1)main();
        else exits();;
}

// function of emergency service********************************************************************
int emergency_service(){
    FILE*em_doc;
    char ftr[50];
    int num;
    system("cls");
        printf("\n\n\t\t  _________________________________");
         printf("\n\t\t |_______Emergency Services.______|");

         em_doc=fopen("emergency_services.txt","r");

        fgets(ftr,20,em_doc);
        printf("\n\t\t\t\t  ___________________________________________");
        printf("\n\t\t\t\t | Number of patients currently in the ward:_|_%s",ftr);
        fgets(ftr,20,em_doc);
        printf("\t\t\t\t | Number of patients remaining in ICU:______|_%s",ftr);
        fgets(ftr,20,em_doc);
        printf("\t\t\t\t | Number of cured patients:_________________|_%s",ftr);
        fgets(ftr,20,em_doc);
        printf("\t\t\t\t | Number of available ambulance:____________|_%s",ftr);
        fgets(ftr,20,em_doc);
        printf("\t\t\t\t | Number of available ICU beds:_____________|_%s",ftr);
        fgets(ftr,20,em_doc);
        printf("\t\t\t\t | Number of available oxygen tanks:_________|_%s",ftr);
        printf("\n\t\t\t\t |___________________________________________|");
        fclose(em_doc);

        printf("\n\n\t\t\t 1 > Go to main menu. \n\t\t\t 2 > Exit \n\t\t\t\t >>>>>>>> Enter selected number :");
        scanf("%d",&num);
        if (num==1)main();
        else exits();
}

// Generate patient report card ********************************************************************
void logstatement(char p_num[]){
        FILE* p_file;
        FILE* put_file;
        FILE*status_w;
        FILE*status_wr;
        int put;
        time_t now=time(NULL);
        char *string_now= ctime(&now);
        char pat[100];
        char put_string[50];
        char temp[50]="temp";
        int des;
         int k=0;
         int d_rep;
         int s_id;
         int lk;
        p_file=fopen(p_num,"r");


        strcat(temp,p_num);

        if (p_file==NULL){
            system("cls");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n\t\tWARNING: ");
            printf("\n\t\t _______________________________________________________");
            printf("\n\t\t|                                                       |");
            printf("\n\t\t| Invalid patients number or entered patients number(%s)",p_num);
            printf("\n\t\t|    not in the system. (please contact nurse)          |");
            printf("\n\t\t|_______________________________________________________|");

            printf("\n\n\n\t\t Press ENTER key to go Home :\n");
            _getch();
             system("cls");
            doctor();}

        printf("\n\t\t     @@@@@@@@     ");
        fgets(pat,50,p_file);
        printf("\n\t\t     @@@@@@@@           PATIENT NUMBER: %s",pat);
        fgets(pat,50,p_file);
        printf("  \t\t@@@@@@@@@@@@@@@@@@      NAME:           %s",pat);
        fgets(pat,50,p_file);
        printf("  \t\t MEDICAL REPORT         ADDRESS:        %s",pat);
        fgets(pat,50,p_file);
        printf("  \t\t@@@@@@@@@@@@@@@@@@      AGE:            %s",pat);
        fgets(pat,50,p_file);
        printf("  \t\t     @@@@@@@@           Phone NUMBER:   %s",pat);
        printf("\t\t     @@@@@@@@    ");

        fgets(pat,50,p_file);
        des=status(temp);
        if(des==1){
                printf(" \n\t\t   __________________ ");
                printf(" \n\t\t  |__Patient Status__|  in the ICU ");

        }
        if(des==2){
                printf(" \n\t\t   __________________ ");
                printf(" \n\t\t  |__Patient Status__|  discharged from the hospital ");}
        if(des==3){
                printf(" \n\t\t   __________________ ");
                printf(" \n\t\t  |__Patient Status__|  Currently in the ward ");}
                printf("\n\n\n-----------------LOG STATMENT---------------------------------------------------------");
        printf("\n");
        while(k!=1){
            fgets(pat,50,p_file);
            printf("%s",pat);
           if(feof(p_file)){
            k=1;
           }
        }
        printf("\n-------------------------------------------------------------------------------------------");
        while (d_rep!=4){
                printf("\n");
                printf("\n ");
                printf("\n\t\t\t 1 > Enter Special notes for patients.");
                printf("\n\t\t\t 2 > Issuing the prescription.");
                printf("\n\t\t\t 3 > Enter condition of patient.");
                printf("\n\t\t\t 4 > Back to main menu.");
                printf("\n\t\t\t 5 > Exit.");
                 printf("\n\t\t\t\t >>>>>>>> Enter selected number: ");
        scanf("%d",&d_rep);
        fclose(p_file);
        if (d_rep==1){
                fclose(p_file);
                put_file= fopen(p_num,"a");

                if (put_file==NULL){
                    printf("\n");
                                        printf("\n");
                                        printf("\n");
                                        printf("\n\t\tWARNING: \n");
                                        printf("\n\t\t _____________________________________________ ");
                                        printf("\n\t\t|                                             |");
                                        printf("\n\t\t|       some system files are missing!...     |");
                                        printf("\n\t\t|                                             |");
                                        printf("\n\t\t|_____________________________________________|");
                                        printf("\n\n\n\n");
                                        printf("\n\t\tPress ENTER key to go Home.\n");
                                        _getch();
                                        system("cls");
                                        main();
                }else{
                fputs("\n",put_file);
                fputs("\n",put_file);
                fputs("\n   ___________________________________________________________\n",put_file);
                fputs("  |___________________Special note for patients_______________|\n ",put_file);
                fputs("  Date & Time:  ",put_file);
                fputs(string_now,put_file);
                 system("cls");
                printf("\n\n\n");
                printf("\n\t\t _________________________________________________");
                printf("\n\t\t|____________Special note for patients____________|");
                printf("\n\n\t\t\t>>>>Exit for typing type 'exit' and enter: ");
                do{
                    fgets(put_string,50,stdin);
                    if(strcmp(put_string,"exit\n")==0){

                        break;
                    }
                    printf("    * ");
                    fputs("   ",put_file);
                    fputs(put_string,put_file);
                   }while(put!=1);

                   fclose(put_file);
                    fflush( put_file );
                    system("cls");
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                     system("cls");
                    logstatement(p_num);
                   }}
        else if (d_rep==2){

                put_file= fopen(p_num,"a");
                if (put_file==NULL){
                    system("cls");
                     printf("\n");
                    printf("\n");
                    printf("\n\t\tWARNING: \n");
                    printf("\n\t\t _____________________________________________ ");
                    printf("\n\t\t|                                             |");
                    printf("\n\t\t|       some system files are missing!...     |");
                    printf("\n\t\t|                                             |");
                    printf("\n\t\t|_____________________________________________|");
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                    system("cls");
                    main();
                }else{
                fputs("\n",put_file);
                fputs("\n",put_file);
                fputs("\n   ___________________________________________________________\n",put_file);
                fputs("  |___________________Issuing the Prescription_________________|\n ",put_file);
                fputs("  Date & Time:  ",put_file);
                 fputs(string_now,put_file);
                system("cls");
                printf("\n\n\n");
                printf("\n\t\t _________________________________________________");
                printf("\n\t\t|_____Issuing the Prescription (name/mg/time)_____|");
                printf("\n\n\t\t\t>>>>Exit for typing type 'exit' and enter: ");

                do{
                    fgets(put_string,50,stdin);
                    if(strcmp(put_string,"exit\n")==0){
                        break;
                    }
                    printf("    * ");
                    fputs("   ",put_file);
                    fputs(put_string,put_file);
                   }while(put!=1);


                   }
                    system("cls");
                    logstatement(p_num);}
            else if (d_rep==3){

                system("cls");
                printf("\n\t\t");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n\t\t  ____________________________");
                printf("\n\t\t |___Enter patient status_____| ");
                printf("\n\t\t\t 1 > Admission of patient  to the ICU.");
                printf("\n\t\t\t 2 > provide oxygen to the patient.");
                printf("\n\t\t\t 3 > Release the patient form the ICU.");
                printf("\n\t\t\t 4 > discharge patient from the hospital.");
                printf("\n\t\t\t 5 > Go to main menu.");
                 printf("\n\t\t\t\t >>>>>>>> Enter selected number: ");
                scanf("%d",&s_id);
                fclose(p_file);
                put_file= fopen(p_num,"a");

                if (s_id==1){
                    lk=status(temp);
                    if(lk==1){
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("\n\t\tWARNING: \n");
                    printf("\n\t\t _____________________________________________ ");
                    printf("\n\t\t|                                             |");
                    printf("\n\t\t|           Patient already In ICU            |");
                    printf("\n\t\t|                                             |");
                    printf("\n\t\t|_____________________________________________|");
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                    system("cls");
                    logstatement(p_num);}
                    if(lk==2){
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("\n\t\tWARNING: \n");
                    printf("\n\t\t _____________________________________________ ");
                    printf("\n\t\t|                                             |");
                    printf("\n\t\t|       Sorry!!..patient discharged from      |");
                    printf("\n\t\t|              the hospital                   |");
                    printf("\n\t\t|_____________________________________________|");
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                    system("cls");
                    logstatement(p_num);}
                    if(lk==3){
                    status_w=fopen(temp,"w");
                    fputs("1",status_w);
                    fclose(status_w);
                    fputs("\n   ________________________________________________ ",put_file);
                    fputs("\n  |____Patient Status: patient currently in ICU____|\n\n",put_file);
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n\t\t  ____________________________________");
                    printf("\n\t\t |______Successfully updated...!!_____| ");

                    analyze_data(1,10,1);
                    analyze_data(4,11,1);
                    fclose(put_file);
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                     system("cls");
                    logstatement(p_num);}}
                else if (s_id==2){
                    lk=status(temp);
                    if(lk==2){
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("\n\t\tWARNING: \n");
                    printf("\n\t\t _____________________________________________ ");
                    printf("\n\t\t|                                             |");
                    printf("\n\t\t|       Sorry!!..patient discharged from      |");
                    printf("\n\t\t|              the hospital                   |");
                    printf("\n\t\t|_____________________________________________|");
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                     system("cls");
                    logstatement(p_num);}
                    else{
                        system("cls");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n\t\t  ____________________________________");
                        printf("\n\t\t |______Successfully updated...!!_____| ");
                        printf("\n");
                        fputs("\n   ______________________________________________________ ",put_file);
                        fputs("\n  |_____Patient Status: provide oxygen to the patient____|\n\n",put_file);
                    analyze_data(5,11,1);
                    fclose(put_file);
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                     system("cls");
                    logstatement(p_num);}}
                else if (s_id==3){
                    lk=status(temp);
                    if(lk==2){
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("\n\t\tWARNING: \n");
                    printf("\n\t\t _____________________________________________ ");
                    printf("\n\t\t|                                             |");
                    printf("\n\t\t|       Sorry!!..patient discharged from      |");
                    printf("\n\t\t|              the hospital                   |");
                    printf("\n\t\t|_____________________________________________|");
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                    system("cls");
                    logstatement(p_num);}
                    if(lk==1){
                        status_w=fopen(temp,"w");
                        fputs("3",status_w);
                        fclose(status_w);
                        remove(temp);
                        system("cls");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n\t\t  ____________________________________");
                        printf("\n\t\t |______Successfully updated...!!_____| ");
                        printf("\n");
                        fputs("\n   ___________________________________________________________",put_file);
                        fputs("\n  |_____Patient Status: Released the patient form the ICU.____|\n\n",put_file);
                    analyze_data(1,11,1);
                    analyze_data(4,10,1);
                    fclose(put_file);
                     printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                     system("cls");
                    logstatement(p_num);}
                    else{
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("\n\t\tWARNING: \n");
                    printf("\n\t\t _______________________________");
                    printf("\n\t\t|                               |");
                    printf("\n\t\t|     Patient not in ICU        |");
                    printf("\n\t\t|                               |");
                    printf("\n\t\t|_______________________________|");
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                    system("cls");
                    logstatement(p_num);}
                }
                 else if (s_id==4){
                    lk=status(temp);
                    if(lk==2){
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("\n\t\tWARNING: \n");
                    printf("\n\t\t _____________________________________________ ");
                    printf("\n\t\t|                                             |");
                    printf("\n\t\t|       Sorry!!..patient discharged from      |");
                    printf("\n\t\t|              the hospital                   |");
                    printf("\n\t\t|_____________________________________________|");
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                    system("cls");
                    logstatement(p_num);}
                    else{
                    status_wr=fopen(temp,"w");
                    fputs("2",status_wr);
                    fclose(status_wr);
                        system("cls");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n\t\t  ____________________________________");
                        printf("\n\t\t |______Successfully Updated...!!_____| ");
                        printf("\n");
                        fputs("\n   _____________________________________________________________",put_file);
                        fputs("\n  |_____Patient Status: discharge patient from the hospital.____|\n\n",put_file);
                    analyze_data(2,10,1);
                    fclose(put_file);
                    printf("\n\n\n\n");
                    printf("\n\t\tPress ENTER key to go Home.\n");
                    _getch();
                     system("cls");
                    logstatement(p_num);}}
                 else if (s_id==5){
                    main();
                 }

            }
            else if (d_rep==5){
                    exits();}        }
        if (d_rep==4)doctor();

}
//Calculation and updating of emergency service data *********************************************************************************************************
void analyze_data(int x,int y,int z){
int k=0;
FILE*read;
FILE*write;
    int count=0;
    char pat[50];
    int value;
    int values;
    char value2[10];
read=fopen("emergency_services.txt","r");
write=fopen("emergency_services_temp.txt","w");
while (k==0){
        fgets(pat,50,read);
        if(count==x){
                if(y==10){
                    value=atoi(pat);
            values=value+z;
            sprintf(value2, "%d", values);
            fputs(value2,write);
            fputs("\n",write);

                }else{
                value=atoi(pat);
            values=value-z;
            sprintf(value2, "%d", values);
            fputs(value2,write);
            fputs("\n",write);
                }

        }
        else{
            fputs(pat,write);

        }
        if(feof(read)){

            k=1;


           }
        count++;

}

//Termination and exit function*******************************************************************
fclose(read);
fclose(write);
 remove("emergency_services.txt");
rename("emergency_services_temp.txt","emergency_services.txt");
}
int exits(){
system("cls");
        printf("\n\n\n\n");
        printf("\n\t\t ___________________________________________________________________________________ ");
        printf("\n\t\t|                                                                                   |");
        printf("\n\t\t| Goodbye,                                                                          |");
        printf("\n\t\t| Have a safe and productive day ahead. Thanks for using our Application.           |");
        printf("\n\t\t|___________________________________________________________________________________|");
        printf("\n\n\n\n\n\n");
        exit(0);
        return 0;}

