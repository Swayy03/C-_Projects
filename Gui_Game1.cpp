//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <string>
#include <queue>
#include "Gui_Game1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.Surface.fmx", _PLAT_MSWINDOWS)

class Question{
	public:
		char *Text;
		char *Answer1;
		char *Answer2;
		char *Answer3;
		int CorrectAnswer;

		Question(){}
		Question(char *text, char *ans1, char *ans2, char *ans3, int corrAns){
			Text = text;
			Answer1 = ans1;
			Answer2 = ans2;
			Answer3 = ans3;
			CorrectAnswer = corrAns;


		}
};

std::queue<Question> LoadQuestions(){
	Question q1 = Question("What is my favorite color?","Red","Neon_Sth","Grey",2);
	Question q2 = Question("What is my favorite marvel character?","Spiderman","Thor","Iron_Man",3);
	Question q3 = Question("When is my fake birthday?","January","May","July",2);

	std::queue<Question> questions;
	questions.push(q1);
	questions.push(q2);
	questions.push(q3);

	return questions;
}
  std::queue<Question> questions;
  Question currentQuestion;
  int selectedAnswer;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	 questions = LoadQuestions();
	 currentQuestion = questions.front();

	 QuestionLabel->Text = currentQuestion.Text;
	 Ans1Radio->Text = currentQuestion.Answer1;
	 Ans2Radio->Text = currentQuestion.Answer2;
	 Ans3Radio->Text = currentQuestion.Answer3;

	 questions.pop();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Ans1RadioChange(TObject *Sender)
{
   selectedAnswer = 1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Ans2RadioChange(TObject *Sender)
{
	selectedAnswer = 2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Ans3RadioChange(TObject *Sender)
{
    selectedAnswer = 3;
}
//---------------------------------------------------------------------------
