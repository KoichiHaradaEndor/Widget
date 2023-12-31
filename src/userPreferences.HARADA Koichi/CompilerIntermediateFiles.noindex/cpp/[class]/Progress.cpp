extern unsigned char D_proc_Progress_2EsetCoordinates[];
void proc_Progress_2EsetCoordinates( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2EsetCoordinates);
	if (!ctx->doingAbort) {
		{
			Bool t1;
			t1=Bool(0).get();
			Long t2;
			c.f.fLine=2;
			t2=Parm<Long>(ctx,inParams,inNbParam,2).get();
			Long t3;
			t3=Parm<Long>(ctx,inParams,inNbParam,1).get();
			Bool t4;
			t4=Bool(1).get();
			if (g->CallComponent(glob,ctx,4,0,3,4,(PCV[]){nullptr,t4.cv(),t3.cv(),t2.cv(),t1.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_0:
_1:
;
	}

}
extern unsigned char D_proc_Progress_2Eget_20errorEventListener[];
void proc_Progress_2Eget_20errorEventListener( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20errorEventListener);
	if (!ctx->doingAbort) {
		Txt lmethodName__t;
		new ( outResult) Txt();
		{
			Txt t0;
			c.f.fLine=4;
			if (g->CallComponent(glob,ctx,4,1,0,0,(PCV[]){t0.cv()})) goto _0;
			lmethodName__t=t0.get();
		}
		c.f.fLine=6;
		Res<Txt>(outResult)=lmethodName__t.get();
		goto _0;
_0:
_1:
;
	}

}
extern unsigned char D_proc_Progress_2Eset_20errorEventListener[];
void proc_Progress_2Eset_20errorEventListener( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20errorEventListener);
	if (!ctx->doingAbort) {
		{
			Txt t0;
			c.f.fLine=6;
			t0=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			if (g->CallComponent(glob,ctx,4,2,1,1,(PCV[]){nullptr,t0.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_0:
_1:
;
	}

}
extern unsigned char D_proc_Progress_2Eshow[];
void proc_Progress_2Eshow( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eshow);
	if (!ctx->doingAbort) {
		{
			Long t0;
			t0=0;
			Long t1;
			t1=0;
			Bool t3;
			t3=Bool(0).get();
			Bool t4;
			t4=Bool(1).get();
			c.f.fLine=2;
			if (g->CallComponent(glob,ctx,4,0,1,4,(PCV[]){nullptr,t4.cv(),t0.cv(),t1.cv(),t3.cv()})) goto _0;
		}
_0:
_1:
;
	}

}
extern Txt K;
extern Txt Kbutton;
extern Txt KfontName;
extern Txt KfontSize;
extern Txt Kmessage;
extern Txt Ktitle;
extern Txt kREUXtvmddvA;
extern Txt kg3ucq3_wCMA;
extern Txt ku3NglOb8H5A;
extern unsigned char D_proc_Progress_2EsetGlobalAppearance[];
void proc_Progress_2EsetGlobalAppearance( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2EsetGlobalAppearance);
	if (!ctx->doingAbort) {
		Long lDO__NOT__MODIFY__l;
		Txt ltitleFontName__t;
		Txt lDO__NOT__MODIFY__t;
		Txt lbuttonFontName__t;
		Txt lmessageFontName__t;
		Long lbuttonFontSize__l;
		Long lmessageFontSize__l;
		Long ltitleFontSize__l;
		{
			Variant t0;
			c.f.fLine=20;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t0.cv())) goto _0;
			Long t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv()},1,1509)) goto _0;
			Bool t2;
			t2=38!=t1.get();
			if (!(t2.get())) goto _3;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t3;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t3.cv(),Kmessage.cv(),kREUXtvmddvA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t3.cv()},1,1805)) goto _0;
		}
		goto _2;
_3:
		{
			Variant t4;
			c.f.fLine=22;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t4.cv())) goto _0;
			Variant t5;
			if (g->GetMember(ctx,t4.cv(),KfontSize.cv(),t5.cv())) goto _0;
			Long t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv()},1,1509)) goto _0;
			Bool t7;
			t7=9!=t6.get();
			Bool t8;
			t8=t7.get();
			if (!(t7.get())) goto _4;
			{
				Variant t9;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t9.cv())) goto _0;
				Variant t10;
				if (g->GetMember(ctx,t9.cv(),KfontSize.cv(),t10.cv())) goto _0;
				Long t11;
				if (g->Call(ctx,(PCV[]){t11.cv(),t10.cv()},1,1509)) goto _0;
				t8=1!=t11.get();
			}
			if (ctx->doingAbort) goto _0;
_4:
			if (!(t8.get())) goto _5;
		}
		{
			Obj t13;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t13.cv(),Kmessage.cv(),ku3NglOb8H5A.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t13.cv()},1,1805)) goto _0;
		}
		goto _2;
_5:
		{
			Variant t14;
			c.f.fLine=24;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),KfontName.cv(),t15.cv())) goto _0;
			Long t16;
			if (g->Call(ctx,(PCV[]){t16.cv(),t15.cv()},1,1509)) goto _0;
			Bool t17;
			t17=2!=t16.get();
			if (!(t17.get())) goto _6;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t18;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t18.cv(),Kmessage.cv(),kg3ucq3_wCMA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t18.cv()},1,1805)) goto _0;
		}
		goto _2;
_6:
		{
			Variant t19;
			c.f.fLine=27;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t19.cv())) goto _0;
			Long t20;
			if (g->Call(ctx,(PCV[]){t20.cv(),t19.cv()},1,1509)) goto _0;
			Bool t21;
			t21=38!=t20.get();
			if (!(t21.get())) goto _7;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t22;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t22.cv(),Kmessage.cv(),kREUXtvmddvA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t22.cv()},1,1805)) goto _0;
		}
		goto _2;
_7:
		{
			Variant t23;
			c.f.fLine=29;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t23.cv())) goto _0;
			Variant t24;
			if (g->GetMember(ctx,t23.cv(),KfontSize.cv(),t24.cv())) goto _0;
			Long t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),t24.cv()},1,1509)) goto _0;
			Bool t26;
			t26=9!=t25.get();
			Bool t27;
			t27=t26.get();
			if (!(t26.get())) goto _8;
			{
				Variant t28;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t28.cv())) goto _0;
				Variant t29;
				if (g->GetMember(ctx,t28.cv(),KfontSize.cv(),t29.cv())) goto _0;
				Long t30;
				if (g->Call(ctx,(PCV[]){t30.cv(),t29.cv()},1,1509)) goto _0;
				t27=1!=t30.get();
			}
			if (ctx->doingAbort) goto _0;
_8:
			if (!(t27.get())) goto _9;
		}
		{
			Obj t32;
			c.f.fLine=30;
			if (g->Call(ctx,(PCV[]){t32.cv(),Kmessage.cv(),ku3NglOb8H5A.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t32.cv()},1,1805)) goto _0;
		}
		goto _2;
_9:
		{
			Variant t33;
			c.f.fLine=31;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t33.cv())) goto _0;
			Variant t34;
			if (g->GetMember(ctx,t33.cv(),KfontName.cv(),t34.cv())) goto _0;
			Long t35;
			if (g->Call(ctx,(PCV[]){t35.cv(),t34.cv()},1,1509)) goto _0;
			Bool t36;
			t36=2!=t35.get();
			if (!(t36.get())) goto _10;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t37;
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){t37.cv(),Kmessage.cv(),kg3ucq3_wCMA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t37.cv()},1,1805)) goto _0;
		}
		goto _2;
_10:
		{
			Variant t38;
			c.f.fLine=34;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t38.cv())) goto _0;
			Long t39;
			if (g->Call(ctx,(PCV[]){t39.cv(),t38.cv()},1,1509)) goto _0;
			Bool t40;
			t40=38!=t39.get();
			if (!(t40.get())) goto _11;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t41;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t41.cv(),Kmessage.cv(),kREUXtvmddvA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t41.cv()},1,1805)) goto _0;
		}
		goto _2;
_11:
		{
			Variant t42;
			c.f.fLine=36;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t42.cv())) goto _0;
			Variant t43;
			if (g->GetMember(ctx,t42.cv(),KfontSize.cv(),t43.cv())) goto _0;
			Long t44;
			if (g->Call(ctx,(PCV[]){t44.cv(),t43.cv()},1,1509)) goto _0;
			Bool t45;
			t45=9!=t44.get();
			Bool t46;
			t46=t45.get();
			if (!(t45.get())) goto _12;
			{
				Variant t47;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t47.cv())) goto _0;
				Variant t48;
				if (g->GetMember(ctx,t47.cv(),KfontSize.cv(),t48.cv())) goto _0;
				Long t49;
				if (g->Call(ctx,(PCV[]){t49.cv(),t48.cv()},1,1509)) goto _0;
				t46=1!=t49.get();
			}
			if (ctx->doingAbort) goto _0;
_12:
			if (!(t46.get())) goto _13;
		}
		{
			Obj t51;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t51.cv(),Kmessage.cv(),ku3NglOb8H5A.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t51.cv()},1,1805)) goto _0;
		}
		goto _2;
_13:
		{
			Variant t52;
			c.f.fLine=38;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t52.cv())) goto _0;
			Variant t53;
			if (g->GetMember(ctx,t52.cv(),KfontName.cv(),t53.cv())) goto _0;
			Long t54;
			if (g->Call(ctx,(PCV[]){t54.cv(),t53.cv()},1,1509)) goto _0;
			Bool t55;
			t55=2!=t54.get();
			if (!(t55.get())) goto _14;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t56;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t56.cv(),Kmessage.cv(),kg3ucq3_wCMA.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t56.cv()},1,1805)) goto _0;
		}
		goto _2;
_14:
_2:
		lDO__NOT__MODIFY__l=-1;
		lDO__NOT__MODIFY__t=K.get();
		{
			Variant t57;
			c.f.fLine=52;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t57.cv())) goto _0;
			Bool t58;
			if (g->OperationOnAny(ctx,7,t57.cv(),Value_null().cv(),t58.cv())) goto _0;
			if (!(t58.get())) goto _15;
		}
		if (ctx->doingAbort) goto _0;
		{
			Variant t59;
			c.f.fLine=53;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t59.cv())) goto _0;
			Variant t60;
			if (g->GetMember(ctx,t59.cv(),KfontSize.cv(),t60.cv())) goto _0;
			Bool t61;
			if (g->OperationOnAny(ctx,6,t60.cv(),Value_null().cv(),t61.cv())) goto _0;
			Variant t62;
			if (!(t61.get())) goto _16;
			{
				Long t63;
				t63=lDO__NOT__MODIFY__l.get();
				if (!g->SetValue(ctx,(PCV[]){t63.cv(),t62.cv(),nullptr})) goto _0;
				if (!g->SetValue(ctx,(PCV[]){t63.cv(),t62.cv(),nullptr})) goto _0;
				goto _17;
			}
			if (ctx->doingAbort) goto _0;
_16:
			{
				Variant t64;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t64.cv())) goto _0;
				if (g->GetMember(ctx,t64.cv(),KfontSize.cv(),t62.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_17:
			Long t66;
			if (!g->GetValue(ctx,(PCV[]){t66.cv(),t62.cv(),nullptr})) goto _0;
			ltitleFontSize__l=t66.get();
		}
		{
			Variant t67;
			c.f.fLine=54;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t67.cv())) goto _0;
			Variant t68;
			if (g->GetMember(ctx,t67.cv(),KfontName.cv(),t68.cv())) goto _0;
			Bool t69;
			if (g->OperationOnAny(ctx,6,t68.cv(),Value_null().cv(),t69.cv())) goto _0;
			Variant t70;
			if (!(t69.get())) goto _18;
			{
				Txt t71;
				t71=lDO__NOT__MODIFY__t.get();
				if (!g->SetValue(ctx,(PCV[]){t71.cv(),t70.cv(),nullptr})) goto _0;
				goto _19;
			}
			if (ctx->doingAbort) goto _0;
_18:
			{
				Variant t72;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Ktitle.cv(),t72.cv())) goto _0;
				if (g->GetMember(ctx,t72.cv(),KfontName.cv(),t70.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_19:
			Txt t74;
			if (!g->GetValue(ctx,(PCV[]){t74.cv(),t70.cv(),nullptr})) goto _0;
			ltitleFontName__t=t74.get();
		}
_15:
		{
			Variant t75;
			c.f.fLine=57;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t75.cv())) goto _0;
			Bool t76;
			if (g->OperationOnAny(ctx,7,t75.cv(),Value_null().cv(),t76.cv())) goto _0;
			if (!(t76.get())) goto _20;
		}
		if (ctx->doingAbort) goto _0;
		{
			Variant t77;
			c.f.fLine=58;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t77.cv())) goto _0;
			Variant t78;
			if (g->GetMember(ctx,t77.cv(),KfontSize.cv(),t78.cv())) goto _0;
			Bool t79;
			if (g->OperationOnAny(ctx,6,t78.cv(),Value_null().cv(),t79.cv())) goto _0;
			Variant t80;
			if (!(t79.get())) goto _21;
			{
				Long t81;
				t81=lDO__NOT__MODIFY__l.get();
				if (!g->SetValue(ctx,(PCV[]){t81.cv(),t80.cv(),nullptr})) goto _0;
				if (!g->SetValue(ctx,(PCV[]){t81.cv(),t80.cv(),nullptr})) goto _0;
				goto _22;
			}
			if (ctx->doingAbort) goto _0;
_21:
			{
				Variant t82;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t82.cv())) goto _0;
				if (g->GetMember(ctx,t82.cv(),KfontSize.cv(),t80.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_22:
			Long t84;
			if (!g->GetValue(ctx,(PCV[]){t84.cv(),t80.cv(),nullptr})) goto _0;
			lmessageFontSize__l=t84.get();
		}
		{
			Variant t85;
			c.f.fLine=59;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t85.cv())) goto _0;
			Variant t86;
			if (g->GetMember(ctx,t85.cv(),KfontName.cv(),t86.cv())) goto _0;
			Bool t87;
			if (g->OperationOnAny(ctx,6,t86.cv(),Value_null().cv(),t87.cv())) goto _0;
			Variant t88;
			if (!(t87.get())) goto _23;
			{
				Txt t89;
				t89=lDO__NOT__MODIFY__t.get();
				if (!g->SetValue(ctx,(PCV[]){t89.cv(),t88.cv(),nullptr})) goto _0;
				goto _24;
			}
			if (ctx->doingAbort) goto _0;
_23:
			{
				Variant t90;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kmessage.cv(),t90.cv())) goto _0;
				if (g->GetMember(ctx,t90.cv(),KfontName.cv(),t88.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_24:
			Txt t92;
			if (!g->GetValue(ctx,(PCV[]){t92.cv(),t88.cv(),nullptr})) goto _0;
			lmessageFontName__t=t92.get();
		}
_20:
		{
			Variant t93;
			c.f.fLine=62;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t93.cv())) goto _0;
			Bool t94;
			if (g->OperationOnAny(ctx,7,t93.cv(),Value_null().cv(),t94.cv())) goto _0;
			if (!(t94.get())) goto _25;
		}
		if (ctx->doingAbort) goto _0;
		{
			Variant t95;
			c.f.fLine=63;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t95.cv())) goto _0;
			Variant t96;
			if (g->GetMember(ctx,t95.cv(),KfontSize.cv(),t96.cv())) goto _0;
			Bool t97;
			if (g->OperationOnAny(ctx,6,t96.cv(),Value_null().cv(),t97.cv())) goto _0;
			Variant t98;
			if (!(t97.get())) goto _26;
			{
				Long t99;
				t99=lDO__NOT__MODIFY__l.get();
				if (!g->SetValue(ctx,(PCV[]){t99.cv(),t98.cv(),nullptr})) goto _0;
				if (!g->SetValue(ctx,(PCV[]){t99.cv(),t98.cv(),nullptr})) goto _0;
				goto _27;
			}
			if (ctx->doingAbort) goto _0;
_26:
			{
				Variant t100;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t100.cv())) goto _0;
				if (g->GetMember(ctx,t100.cv(),KfontSize.cv(),t98.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_27:
			Long t102;
			if (!g->GetValue(ctx,(PCV[]){t102.cv(),t98.cv(),nullptr})) goto _0;
			lbuttonFontSize__l=t102.get();
		}
		{
			Variant t103;
			c.f.fLine=64;
			if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t103.cv())) goto _0;
			Variant t104;
			if (g->GetMember(ctx,t103.cv(),KfontName.cv(),t104.cv())) goto _0;
			Bool t105;
			if (g->OperationOnAny(ctx,6,t104.cv(),Value_null().cv(),t105.cv())) goto _0;
			Variant t106;
			if (!(t105.get())) goto _28;
			{
				Txt t107;
				t107=lDO__NOT__MODIFY__t.get();
				if (!g->SetValue(ctx,(PCV[]){t107.cv(),t106.cv(),nullptr})) goto _0;
				goto _29;
			}
			if (ctx->doingAbort) goto _0;
_28:
			{
				Variant t108;
				if (g->GetMember(ctx,Parm<Obj>(ctx,inParams,inNbParam,1).cv(),Kbutton.cv(),t108.cv())) goto _0;
				if (g->GetMember(ctx,t108.cv(),KfontName.cv(),t106.cv())) goto _0;
			}
			if (ctx->doingAbort) goto _0;
_29:
			Txt t110;
			if (!g->GetValue(ctx,(PCV[]){t110.cv(),t106.cv(),nullptr})) goto _0;
			lbuttonFontName__t=t110.get();
		}
_25:
		{
			Long t111;
			t111=lbuttonFontSize__l.get();
			Long t112;
			t112=lmessageFontSize__l.get();
			Long t113;
			t113=ltitleFontSize__l.get();
			c.f.fLine=67;
			if (g->CallComponent(glob,ctx,4,3,3,3,(PCV[]){nullptr,t113.cv(),t112.cv(),t111.cv()})) goto _0;
		}
		{
			Txt t114;
			t114=lbuttonFontName__t.get();
			Txt t115;
			t115=lmessageFontName__t.get();
			Txt t116;
			t116=ltitleFontName__t.get();
			c.f.fLine=68;
			if (g->CallComponent(glob,ctx,4,4,3,3,(PCV[]){nullptr,t116.cv(),t115.cv(),t114.cv()})) goto _0;
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Estop[];
void proc_Progress_2Estop( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Estop);
	if (!ctx->doingAbort) {
		Txt lname__t;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Variant t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			g->Check(ctx);
			Txt t2;
			if (!g->GetValue(ctx,(PCV[]){t2.cv(),t1.cv(),nullptr})) goto _0;
			lname__t=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t5.get();
		}
		{
			Obj t6;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t6.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t7;
			if (g->GetMember(ctx,t6.cv(),Kprogress.cv(),t7.cv())) goto _0;
			Obj t8;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1470)) goto _0;
			Variant t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t7.cv(),t9.cv(),t10.cv())) goto _0;
			Bool t11;
			if (g->OperationOnAny(ctx,7,t10.cv(),Value_null().cv(),t11.cv())) goto _0;
			if (!(t11.get())) goto _2;
		}
		{
			Obj t12;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),Kprogress.cv(),t13.cv())) goto _0;
			Obj t14;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Variant t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t13.cv(),t15.cv(),t16.cv())) goto _0;
			Long t17;
			if (!g->GetValue(ctx,(PCV[]){t17.cv(),t16.cv(),nullptr})) goto _0;
			lid__l=t17.get();
		}
		{
			Long t18;
			t18=lid__l.get();
			c.f.fLine=11;
			if (g->CallComponent(glob,ctx,4,5,1,1,(PCV[]){nullptr,t18.cv()})) goto _0;
		}
		{
			Obj t19;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t19.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t20;
			if (g->GetMember(ctx,t19.cv(),Kprogress.cv(),t20.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t20.cv(),lname__t.cv()},2,1226)) goto _0;
		}
_2:
		{
			Obj t21;
			l__4D__auto__mutex__0=t21.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20stopEventListener[];
void proc_Progress_2Eset_20stopEventListener( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20stopEventListener);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t16;
			t16=Bool(0).get();
			Txt t17;
			c.f.fLine=8;
			t17=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			Long t18;
			t18=lid__l.get();
			if (g->CallComponent(glob,ctx,4,6,2,3,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t19;
			l__4D__auto__mutex__0=t19.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20stopEventListener[];
void proc_Progress_2Eget_20stopEventListener( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20stopEventListener);
	if (!ctx->doingAbort) {
		Txt lmethodName__t;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Txt();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Txt t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,7,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			lmethodName__t=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Txt>(outResult)=lmethodName__t.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20icon[];
void proc_Progress_2Eget_20icon( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20icon);
	if (!ctx->doingAbort) {
		Long lid__l;
		Pic licon__g;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Pic();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Pic t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,8,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			licon__g=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Pic>(outResult)=licon__g.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20buttonTitle[];
void proc_Progress_2Eset_20buttonTitle( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20buttonTitle);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t16;
			t16=Bool(0).get();
			Txt t17;
			c.f.fLine=8;
			t17=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			Long t18;
			t18=lid__l.get();
			if (g->CallComponent(glob,ctx,4,9,2,3,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t19;
			l__4D__auto__mutex__0=t19.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20buttonTitle[];
void proc_Progress_2Eget_20buttonTitle( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20buttonTitle);
	if (!ctx->doingAbort) {
		Txt ltitle__t;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Txt();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Txt t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,10,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			ltitle__t=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Txt>(outResult)=ltitle__t.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20icon[];
void proc_Progress_2Eset_20icon( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20icon);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t16;
			t16=Bool(0).get();
			Pic t17;
			c.f.fLine=14;
			t17=Parm<Pic>(ctx,inParams,inNbParam,1).get();
			Long t18;
			t18=lid__l.get();
			if (g->CallComponent(glob,ctx,4,11,2,3,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t19;
			l__4D__auto__mutex__0=t19.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20buttonEnabled[];
void proc_Progress_2Eset_20buttonEnabled( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20buttonEnabled);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t16;
			t16=Bool(0).get();
			Bool t17;
			c.f.fLine=8;
			t17=Parm<Bool>(ctx,inParams,inNbParam,1).get();
			Long t18;
			t18=lid__l.get();
			if (g->CallComponent(glob,ctx,4,12,2,3,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t19;
			l__4D__auto__mutex__0=t19.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20buttonEnabled[];
void proc_Progress_2Eget_20buttonEnabled( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20buttonEnabled);
	if (!ctx->doingAbort) {
		Bool lenabled__b;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Bool();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Bool t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,13,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			lenabled__b=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Bool>(outResult)=lenabled__b.get();
		goto _0;
_0:
_1:
;
	}

}
extern unsigned char D_proc_Progress_2Ehide[];
void proc_Progress_2Ehide( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Ehide);
	if (!ctx->doingAbort) {
		{
			Long t0;
			t0=0;
			Long t1;
			t1=0;
			Bool t3;
			t3=Bool(0).get();
			Bool t4;
			t4=Bool(0).get();
			c.f.fLine=2;
			if (g->CallComponent(glob,ctx,4,0,1,4,(PCV[]){nullptr,t4.cv(),t0.cv(),t1.cv(),t3.cv()})) goto _0;
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20progress[];
void proc_Progress_2Eset_20progress( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20progress);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t17;
			t17=Bool(0).get();
			Txt t15;
			Num t18;
			c.f.fLine=8;
			t18=Parm<Num>(ctx,inParams,inNbParam,1).get();
			Long t19;
			t19=lid__l.get();
			if (g->CallComponent(glob,ctx,4,14,2,4,(PCV[]){nullptr,t19.cv(),t18.cv(),t15.cv(),t17.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t20;
			l__4D__auto__mutex__0=t20.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20progress[];
void proc_Progress_2Eget_20progress( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20progress);
	if (!ctx->doingAbort) {
		Num lprogress__r;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Num();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Num t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,15,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			lprogress__r=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Num>(outResult)=lprogress__r.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Ecanceled[];
void proc_Progress_2Ecanceled( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Ecanceled);
	if (!ctx->doingAbort) {
		Bool lstopped__b;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Bool();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Bool t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,16,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			lstopped__b=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Bool>(outResult)=lstopped__b.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20message[];
void proc_Progress_2Eset_20message( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20message);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Bool t16;
			t16=Bool(0).get();
			Txt t17;
			c.f.fLine=8;
			t17=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			Long t18;
			t18=lid__l.get();
			if (g->CallComponent(glob,ctx,4,17,2,3,(PCV[]){nullptr,t18.cv(),t17.cv(),t16.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t19;
			l__4D__auto__mutex__0=t19.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20message[];
void proc_Progress_2Eget_20message( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20message);
	if (!ctx->doingAbort) {
		Long lid__l;
		Txt lmessage__t;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Txt();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Txt t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,18,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			lmessage__t=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Txt>(outResult)=lmessage__t.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Estart[];
void proc_Progress_2Estart( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Estart);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,6,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Bool t10;
			t10=Bool(0).get();
			Long t11;
			c.f.fLine=7;
			if (g->CallComponent(glob,ctx,4,19,0,1,(PCV[]){t11.cv(),t10.cv()})) goto _0;
			lid__l=t11.get();
		}
		{
			Obj t12;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),Kprogress.cv(),t13.cv())) goto _0;
			Obj t14;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Variant t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			if (g->SetMember(ctx,t13.cv(),t15.cv(),lid__l.cv())) goto _0;
		}
_2:
		{
			Obj t16;
			l__4D__auto__mutex__0=t16.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eset_20title[];
void proc_Progress_2Eset_20title( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eset_20title);
	if (!ctx->doingAbort) {
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Num t15;
			t15=0;
			Bool t18;
			t18=Bool(0).get();
			Txt t16;
			Txt t19;
			c.f.fLine=8;
			t19=Parm<Txt>(ctx,inParams,inNbParam,1).get();
			Long t20;
			t20=lid__l.get();
			if (g->CallComponent(glob,ctx,4,20,2,5,(PCV[]){nullptr,t20.cv(),t19.cv(),t15.cv(),t16.cv(),t18.cv()})) goto _0;
		}
		if (ctx->doingAbort) goto _0;
_2:
		{
			Obj t21;
			l__4D__auto__mutex__0=t21.get();
		}
_0:
_1:
;
	}

}
extern Txt Kname;
extern Txt Kprogress;
extern unsigned char D_proc_Progress_2Eget_20title[];
void proc_Progress_2Eget_20title( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_2Eget_20title);
	if (!ctx->doingAbort) {
		Txt ltitle__t;
		Long lid__l;
		Obj l__4D__auto__mutex__0;
		new ( outResult) Txt();
		{
			Obj t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kprogress.cv(),t1.cv())) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t4.cv(),t6.cv(),t7.cv())) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,7,t7.cv(),Value_null().cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kprogress.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kname.cv(),Long(11).cv()},3,1496)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t10.cv(),t12.cv(),t13.cv())) goto _0;
			Long t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			lid__l=t14.get();
		}
		{
			Long t15;
			t15=lid__l.get();
			Txt t16;
			c.f.fLine=9;
			if (g->CallComponent(glob,ctx,4,21,1,1,(PCV[]){t16.cv(),t15.cv()})) goto _0;
			ltitle__t=t16.get();
		}
_2:
		{
			Obj t17;
			l__4D__auto__mutex__0=t17.get();
		}
		c.f.fLine=14;
		Res<Txt>(outResult)=ltitle__t.get();
		goto _0;
_0:
_1:
;
	}

}
extern Txt K;
extern Txt Kmessage;
extern Txt Kname;
extern Txt Kprogress;
extern Txt kazfZ5BZmhMM;
extern unsigned char D_proc_Progress_3Aconstructor[];
void proc_Progress_3Aconstructor( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Progress_3Aconstructor);
	if (!ctx->doingAbort) {
		Obj l__4D__auto__mutex__0;
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Obj t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv()},1,1529)) goto _0;
			l__4D__auto__mutex__0=t1.get();
		}
		{
			Obj t2;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,1525)) goto _0;
			g->Check(ctx);
			Obj t3;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1525)) goto _0;
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kprogress.cv(),t4.cv())) goto _0;
			Bool t5;
			t5=t4.truthy();
			if (t5.get()) goto _2;
			{
				Obj t6;
				if (g->Call(ctx,(PCV[]){t6.cv()},0,1526)) goto _0;
				if (!g->SetValue(ctx,(PCV[]){t6.cv(),t4.cv(),nullptr})) goto _0;
			}
_2:
			if (g->SetMember(ctx,t2.cv(),Kprogress.cv(),t4.cv())) goto _0;
		}
		{
			Obj t7;
			l__4D__auto__mutex__0=t7.get();
		}
		{
			Bool t8;
			c.f.fLine=6;
			t8=g->CompareString(ctx,Parm<Txt>(ctx,inParams,inNbParam,1).get(),K.get())==0;
			if (!(t8.get())) goto _3;
		}
		if (ctx->doingAbort) goto _0;
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv(),Kmessage.cv(),kazfZ5BZmhMM.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t9.cv()},1,1805)) goto _0;
		}
_3:
		{
			Obj t10;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t10.cv(),Kname.cv(),Parm<Txt>(ctx,inParams,inNbParam,1).cv(),Long(11).cv()},4,1497)) goto _0;
			g->Check(ctx);
		}
		if (ctx->doingAbort) goto _0;
_0:
_1:
;
	}

}
