#include <iostream>
using namespace std;

int GameBoardArr[8][8] = {0};
bool start = true;

class Board
{
public:
    int currentOwnedShapes = 8;
    int eatenShapes = 0;
    int shapePositionArr[8][8];
    bool moveToI0 = false;
    bool moveToI1 = false;
    bool moveToI2 = false;
    bool sacrifice = false;
    bool doubling = false;
};


void FillArray()
{
    int linesCounter = 0;
   for(int lines = 0; lines < 8; lines++)
   {
       for(int columns = 0; columns < 8; columns++)
       {
           if(linesCounter % 2 == 0)
           {
             if(columns % 2 == 0)
              {
               GameBoardArr[lines][columns] = true;
              }
           }

           if(linesCounter % 2 == 1)
           {
              if(columns % 2 == 1)
              {
               GameBoardArr[lines][columns] = true;
              }
           }

              //FILLING WITH '2'
           if(start == true && lines>=0 && lines<=2)
           {
               if(columns >= 0 && columns <=7)
               {

          if(linesCounter % 2 == 0)
           {
             if(columns % 2 == 0)
              {
              // GameBoardArr[lines][columns] = 2;
              }
           }

           if(linesCounter % 2 == 1)
           {
              if(columns % 2 == 1)
              {
               //GameBoardArr[lines][columns] = 2;
              }
           }
               }
           }
            //FILLING WITH 3
          if(start == true && lines>=5  && lines<=7)
           {
               if(columns >= 0 && columns <=7)
               {

          if(linesCounter % 2 == 0)
           {
             if(columns % 2 == 0)
              {
              // GameBoardArr[lines][columns] = 3;
              }
           }

           if(linesCounter % 2 == 1)
           {
              if(columns % 2 == 1)
              {
              // GameBoardArr[lines][columns] = 3;
              }
           }
               }
           }

       }
       linesCounter++;
   }
}

void PrintOutArray()
{
  int counter = 0;
    for(int lines = 0; lines < 8; lines++)
    {
        for(int columns = 0; columns < 8; columns++)
        {
         if(counter < 8)
         {
             if(GameBoardArr[lines][columns] == 0){cout<<" ";}
             else{cout<< GameBoardArr[lines][columns]<<" ";}
         }
         counter++;
         if(counter > 7)
         {
             counter = 0;
             cout<<"\n";
         }
        }
    }
}

bool ValidMove(int initialPosition, int desiredPosition)
{
    bool pcValidMove;
    return pcValidMove;
}

void MoveShape(int shapeR)
{
   //if(ValidMove())
}

void ChooseBestMove()
{
    int TempArray[8][8];
      ///TRY TO EAT
      for(int lines = 0; lines < 8; lines++)
      {
          for(int columns = 0; columns < 8; columns++)
          {
             if(GameBoardArr[lines][columns] == 2)
             {
                // cout<<"INCOOR";
                int prevLines = lines;
                int prevColumns = columns;
                int nextLines = lines;
                int nextColumns = columns;
                 //TEST: cout<<"THERE IS ONE: "<<lines<<columns;
                // cout<<"lines: "<<lines<<"columns:"<<columns;
                 if(GameBoardArr[--prevLines] [--prevColumns] == 3)
                 {
                   //cout<<"THERE IS ONE";
                   GameBoardArr[lines][columns] = 1;
                   GameBoardArr[++nextLines][++nextColumns] = 45;
                 }


                 prevLines = lines;
                 prevColumns = columns;
                 nextLines = lines;
                 nextColumns = columns;

                 if(GameBoardArr[++prevLines] [++prevColumns] == 3)
                 {
                   GameBoardArr[lines][columns] = 1;
                   GameBoardArr[++nextLines][++nextColumns] = 77;
                 }
                 prevLines = lines;
                 prevColumns = columns;
                 nextLines = lines;
                 nextColumns = columns;

                if(GameBoardArr[++prevLines] [--prevColumns] == 3)
                 {
                     cout<<"FOUND3";
                   GameBoardArr[lines][columns] = 1;
                   GameBoardArr[++nextLines][--nextColumns] = 66;
                 }
--prevLines;
++prevColumns;
                if(GameBoardArr[++lines] [ --columns] == 3)
                 {
                   GameBoardArr[][] = 1;
                   GameBoardArr[][] = 66;
                 }





             }
          }
      }
}

int main()
{
   FillArray();

  //GameBoardArr[1][1] = 3;
  GameBoardArr[3][3] = 3;
  GameBoardArr[4][2] = 3;
  GameBoardArr[5][1] = 2;
  PrintOutArray();
  cout<<"\n\n\n"<<endl;

  ChooseBestMove();
  cout<<"\n\n\n"<<endl;
  PrintOutArray();

}
