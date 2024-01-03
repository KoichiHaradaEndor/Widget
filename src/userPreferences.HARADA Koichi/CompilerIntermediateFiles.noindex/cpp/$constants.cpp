#include "$asm4d.h"
#include "cp4drt_shared.h"
#include "legacy_language_types.h"
Txt K;
Txt KCalculating;
Txt KPreparing_2E_2E_2E;
Txt KProgress;
Txt K_20_2F_20;
Txt K_50_5C_6B_62;
Txt Kbutton;
Txt KbuttonEnabled;
Txt KbuttonTitle;
Txt Kcanceled;
Txt KfontName;
Txt KfontSize;
Txt Khide;
Txt Kmessage;
Txt Kname;
Txt Knew;
Txt Kprogress;
Txt KsetCoordinates;
Txt KsetProgress;
Txt Kshow;
Txt Kstart;
Txt Kstop;
Txt Ktest;
Txt Ktest2;
Txt Ktitle;
Txt kJOafNKrRew8;
Txt kMK8aciobBCg;
Txt kREUXtvmddvA;
Txt kTDuAS3gJ9s8;
Txt kg3ucq3_wCMA;

struct Txt_info { Txt *t; const char16_t *s; size_t n;};
static const Txt_info constants[]=
{
	{&K,nullptr,0},
	{&KCalculating,u"Calculating",11},
	{&KPreparing_2E_2E_2E,u"Preparing...",12},
	{&KProgress,u"Progress",8},
	{&K_20_2F_20,u" / ",3},
	{&K_50_5C_6B_62,u"\x505c\x6b62",2},
	{&Kbutton,u"button",6},
	{&KbuttonEnabled,u"buttonEnabled",13},
	{&KbuttonTitle,u"buttonTitle",11},
	{&Kcanceled,u"canceled",8},
	{&KfontName,u"fontName",8},
	{&KfontSize,u"fontSize",8},
	{&Khide,u"hide",4},
	{&Kmessage,u"message",7},
	{&Kname,u"name",4},
	{&Knew,u"new",3},
	{&Kprogress,u"progress",8},
	{&KsetCoordinates,u"setCoordinates",14},
	{&KsetProgress,u"setProgress",11},
	{&Kshow,u"show",4},
	{&Kstart,u"start",5},
	{&Kstop,u"stop",4},
	{&Ktest,u"test",4},
	{&Ktest2,u"test2",5},
	{&Ktitle,u"title",5},
	{&kJOafNKrRew8,u"__ANONYMOUS_PROGRESS__",22},
	{&kMK8aciobBCg,u"setGlobalAppearance",19},
	{&kREUXtvmddvA,u"The title property must be object type.",39},
	{&kTDuAS3gJ9s8,u"The fontSize property must be numeric type.",43},
	{&kg3ucq3_wCMA,u"The fontSize property must be text type.",40},
	{nullptr,nullptr,0}
};

void InitConstants()
{
	for( const Txt_info *i = constants ; i->t != nullptr; ++i)
		g->AssignUniChars(i->t->cv(),i->s,i->n);
}

void DeInitConstants()
{
	for( const Txt_info *i = constants ; i->t != nullptr; ++i)
		i->t->setNull();
}
