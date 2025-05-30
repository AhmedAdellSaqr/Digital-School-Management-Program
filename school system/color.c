/* while(n<3)
            switch(n)
            {
            case 1:
                system("cls");
                fathers();
                //getch();
                //system("cls");
                break;

            case 2:
                system("cls");
                Mothers();
                getch();
                system("cls");
                break;
            default :
                system("cls");
                getch();
                printf("\n\t\t\t\t\tEnter a valid number\n\n");
                printf("\t\t\t\tPress any key to continue.......");
                getch();
                system("cls");
                break;
            }
            fclose(file);

        void milli_sleep(unsigned int milliseconds)
        {
#ifdef _WIN32
            //use windos Sleep function, sleeps for a number of milliseconds
            Sleep(milliseconds);
#else
            // use posix nanosleep function, sleeps for a number of nanoseconds
            struct timespec ts;
            ts.tv_sec = milliseconds / 1000;
            ts.tv_nsec = (milliseconds % 1000) * 1000000L;
            nanosleep(&ts, NULL);
#endif
        }
//Example -- >     delay_print("Hello world",10) ;

        SetColor(9);
        printf("******") ;
        Sleep(1000);
        SetColor(4);
        delay_print("**",300) ;
        Sleep(1000);
        SetColor(5);
        delay_print("**",300) ;
        Sleep(1000);
        SetColor(11);
        delay_print("**",300) ;
        Sleep(1000);
        SetColor(8);
        delay_print("**",300) ;
        Sleep(1000);
        SetColor(12);
        delay_print("**",300) ;
    }

*/
