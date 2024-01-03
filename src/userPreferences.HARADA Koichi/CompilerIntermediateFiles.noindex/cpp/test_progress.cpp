extern Txt KCalculating;
extern Txt KPreparing_2E_2E_2E;
extern Txt KProgress;
extern Txt K_20_2F_20;
extern Txt K_50_5C_6B_62;
extern Txt Kbutton;
extern Txt KbuttonEnabled;
extern Txt KbuttonTitle;
extern Txt Kcanceled;
extern Txt KfontSize;
extern Txt Khide;
extern Txt Kmessage;
extern Txt Knew;
extern Txt Kprogress;
extern Txt KsetCoordinates;
extern Txt KsetProgress;
extern Txt Kshow;
extern Txt Kstart;
extern Txt Kstop;
extern Txt Ktest;
extern Txt Ktest2;
extern Txt Ktitle;
extern Txt kMK8aciobBCg;
extern unsigned char D_proc_TEST__PROGRESS[];
void proc_TEST__PROGRESS( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_TEST__PROGRESS);
	if (!ctx->doingAbort) {
		Long v0;
		Long v1;
		Long v2;
		Long li;
		Obj lprogress__o;
		Long v3;
		Long lmax__l;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1710)) goto _0;
			Variant t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv(),KProgress.cv(),Long(56).cv()},3,1496)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Knew.cv(),Ktest.cv()},3,1498)) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			lprogress__o=t3.get();
		}
		c.f.fLine=5;
		if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),Kstart.cv()},2,1500)) goto _0;
		g->Check(ctx);
		{
			Bool t4;
			t4=Bool(1).get();
			c.f.fLine=6;
			if (g->SetMember(ctx,lprogress__o.cv(),KbuttonEnabled.cv(),t4.cv())) goto _0;
		}
		c.f.fLine=7;
		if (g->SetMember(ctx,lprogress__o.cv(),KbuttonTitle.cv(),K_50_5C_6B_62.cv())) goto _0;
		c.f.fLine=9;
		if (g->SetMember(ctx,lprogress__o.cv(),Ktitle.cv(),KPreparing_2E_2E_2E.cv())) goto _0;
		c.f.fLine=10;
		if (g->SetMember(ctx,lprogress__o.cv(),Kprogress.cv(),Long(-1).cv())) goto _0;
		{
			Long t5;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,322)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t5.cv(),Num(120).cv()},2,323)) goto _0;
		}
		c.f.fLine=13;
		if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),Khide.cv()},2,1500)) goto _0;
		g->Check(ctx);
		{
			Long t6;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t6.cv()},0,322)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t6.cv(),Num(120).cv()},2,323)) goto _0;
		}
		c.f.fLine=15;
		if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),Kshow.cv()},2,1500)) goto _0;
		g->Check(ctx);
		c.f.fLine=17;
		if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),KsetCoordinates.cv(),Long(200).cv(),Long(500).cv()},4,1500)) goto _0;
		g->Check(ctx);
		{
			Obj t7;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t7.cv(),KfontSize.cv(),Long(14).cv()},2,1471)) goto _0;
			g->Check(ctx);
			Obj t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),KfontSize.cv(),Long(14).cv()},2,1471)) goto _0;
			Obj t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),KfontSize.cv(),Long(14).cv()},2,1471)) goto _0;
			Obj t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),Ktitle.cv(),t7.cv(),Kmessage.cv(),t8.cv(),Kbutton.cv(),t9.cv()},6,1471)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),kMK8aciobBCg.cv(),t10.cv()},3,1500)) goto _0;
		}
		lmax__l=100;
		li=1;
		v0=lmax__l.get();
		goto _2;
_4:
		{
			Num t11;
			t11=li.get();
			Num t12;
			t12=lmax__l.get();
			Num t13;
			t13=t11.get()/t12.get();
			c.f.fLine=22;
			if (g->SetMember(ctx,lprogress__o.cv(),Kprogress.cv(),t13.cv())) goto _0;
		}
		{
			Txt t14;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t14.cv(),li.cv()},1,10)) goto _0;
			Txt t15;
			g->AddString(t14.get(),K_20_2F_20.get(),t15.get());
			Txt t16;
			if (g->Call(ctx,(PCV[]){t16.cv(),lmax__l.cv()},1,10)) goto _0;
			Txt t17;
			g->AddString(t15.get(),t16.get(),t17.get());
			if (g->SetMember(ctx,lprogress__o.cv(),Ktitle.cv(),t17.cv())) goto _0;
		}
		c.f.fLine=24;
		if (g->SetMember(ctx,lprogress__o.cv(),Kmessage.cv(),KCalculating.cv())) goto _0;
		{
			Long t18;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t18.cv()},0,322)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t18.cv(),Num(5).cv()},2,323)) goto _0;
		}
		{
			Variant t19;
			c.f.fLine=26;
			if (g->GetMember(ctx,lprogress__o.cv(),Kcanceled.cv(),t19.cv())) goto _0;
			Bool t20;
			if (!g->GetValue(ctx,(PCV[]){t20.cv(),t19.cv(),nullptr})) goto _0;
			if (!(t20.get())) goto _6;
		}
		goto _5;
_6:
_3:
		li=li.get()+1;
_2:
		if (li.get()<=v0.get()) goto _4;
_5:
		c.f.fLine=30;
		if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),Kstop.cv()},2,1500)) goto _0;
		g->Check(ctx);
		{
			Obj t23;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t23.cv()},0,1710)) goto _0;
			Variant t24;
			if (g->Call(ctx,(PCV[]){t24.cv(),t23.cv(),KProgress.cv(),Long(56).cv()},3,1496)) goto _0;
			g->Check(ctx);
			Variant t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),t24.cv(),Knew.cv(),Ktest2.cv()},3,1498)) goto _0;
			Obj t26;
			if (!g->GetValue(ctx,(PCV[]){t26.cv(),t25.cv(),nullptr})) goto _0;
			lprogress__o=t26.get();
		}
		c.f.fLine=34;
		if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),Kstart.cv()},2,1500)) goto _0;
		g->Check(ctx);
		li=1;
		v2=lmax__l.get();
		goto _7;
_9:
		{
			Num t27;
			t27=li.get();
			Num t28;
			t28=lmax__l.get();
			Num t29;
			t29=t27.get()/t28.get();
			Txt t30;
			c.f.fLine=36;
			if (g->Call(ctx,(PCV[]){t30.cv(),li.cv()},1,10)) goto _0;
			Txt t31;
			g->AddString(t30.get(),K_20_2F_20.get(),t31.get());
			Txt t32;
			if (g->Call(ctx,(PCV[]){t32.cv(),lmax__l.cv()},1,10)) goto _0;
			Txt t33;
			g->AddString(t31.get(),t32.get(),t33.get());
			Obj t34;
			if (g->Call(ctx,(PCV[]){t34.cv(),Kprogress.cv(),t29.cv(),Ktitle.cv(),t33.cv(),Kmessage.cv(),KCalculating.cv()},6,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),KsetProgress.cv(),t34.cv()},3,1500)) goto _0;
		}
		{
			Long t35;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t35.cv()},0,322)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t35.cv(),Num(5).cv()},2,323)) goto _0;
		}
_8:
		li=li.get()+1;
_7:
		if (li.get()<=v2.get()) goto _9;
_10:
		c.f.fLine=39;
		if (g->Call(ctx,(PCV[]){nullptr,lprogress__o.cv(),Kstop.cv()},2,1500)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	}

}
