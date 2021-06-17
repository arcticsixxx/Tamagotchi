
class Pet
{
public:
    int health;
    int mood;
    int hunger;

    void screen()
    {
        system("cls");
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "                               +--------------+--------------+--------------+\n";
        std::cout << "                                 HEALTH:"<<health<<"%\t  MOOD:"<<mood<<"%\tHUNGER:"<<hunger<<"%\n";
        std::cout << "                               +--------------+--------------+--------------+\n";
        std::cout << "                               |                                            |\n";
        std::cout << "                               |                   $$            $$         |\n";
        std::cout << "                               |                  $   $        $   $        |\n";
        std::cout << "                               |                  $     $$$$$$     $        |\n";
        std::cout << "                               |                  $    sss   sss    $       |\n";
        std::cout << "                               |                  $     @     @      $      |\n";
        std::cout << "                               |                 $       $$$        $       |\n";
        std::cout << "                               |     $$$$$$$$     $       $        $        |\n";
        std::cout << "                               |   $$        $       $$         $$          |\n";
        std::cout << "                               |    $         $     $   $$$$$$   $          |\n";
        std::cout << "                               |       $      $    $  $        $  $         |\n";
        std::cout << "                               |       $     $    $  $          $  $        |\n";
        std::cout << "                               |      $    $   $$$$  $          $  $$$$     |\n";
        std::cout << "                               |     $   $    $    $  $        $   $   $    |\n";
        std::cout << "                               |     $  $     $    $  $        $  $    $    |\n";
        std::cout << "                               |      $  $      $    $   $ $     $   $      |\n";
        std::cout << "                               |       $   $$$$$ $ $     $ $    $   $       |\n";
        std::cout << "                               |          $$$$$ $    $    $     $    $      |\n";
        std::cout << "                               |                $$$ $     $      $ $$$      |\n";
        std::cout << "                               |                     $$$$   $$$$$           |\n";
        std::cout << "                               |                                            |\n";
        std::cout << "                               +--------------------------------------------+\n";
        std::cout << "                                                 HOW TO PLAY?                \n";
        std::cout << "                                  Z - FEED | X - PLAY | C - HEAL | V - EXIT  \n";
        std::cout << "                                                                               ";
    }
};

class State
{
public:
    bool isOver;

    void gOver()
    {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout <<"                                $$$$    $$$$   $$   $  $$$$$ \n";
        std::cout <<"                               $$      $$  $$  $$$ $$  $$    \n";
        std::cout <<"                               $$ $$$  $$$$$$  $$ $ $  $$$$  \n";
        std::cout <<"                               $$  $$  $$  $$  $$   $  $$    \n";
        std::cout <<"                                $$$$   $$  $$  $$   $  $$$$$ \n";
        std::cout <<"                                                             \n";
        std::cout <<"                                $$$$   $$  $$  $$$$$   $$$$$ \n";
        std::cout <<"                               $$  $$  $$  $$  $$      $$  $$\n";
        std::cout <<"                               $$  $$  $$  $$  $$$$    $$$$$ \n";
        std::cout <<"                               $$  $$   $$$$   $$      $$  $$\n";
        std::cout <<"                                $$$$     $$    $$$$$   $$  $$\n";
    }
};
