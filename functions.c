/*functions.c*/
//-----------------------------------------------
/**	В этом файле содержится описание функций,
//	объявленных в файле functions_interface.h
*/
void canonisation (char *str){
	/*Здесь описан массив стоп-слов
	  В дальнейшем планируется создание БД			
	*/
	typedef char word4[4];  
	const word4 stop_words[30] = {	"это",	"как", 	"так",
  									"и", 	"в", 	"над",
  									"к", 	"до", 	"не",
 									"на", 	"но", 	"за",
  									"то", 	"с", 	"ли",
  									"а", 	"во", 	"от",
  									"со", 	"для", 	"о",
 									"же", 	"ну", 	"вы",
  									"бы", 	"что", 	"кто",
  									"он", 	"она", 	"вот"};
  	const char 									
}