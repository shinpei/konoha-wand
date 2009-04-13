#include <konoha.h>
#include <ncurses.h>


/* Int Curses.clearok(self, Boolean b1) */

METHOD Curses_clearok(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	int ret = CursesClearok(self ,b1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.delwin(self) */

METHOD Curses_delwin(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesDelwin(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Curses Curses.derwin(self, Int i1, Int i2, Int i3, Int i4) */

METHOD Curses_derwin(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	Curses *ret = CursesDerwin(self ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN(ctx, sfp, ret);
}

/* Curses Curses.dupwin(self) */

METHOD Curses_dupwin(Ctx *ctx, knh_sfp_t* sfp)
{
	Curses *ret = CursesDupwin(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* void Curses.idcok(self, Boolean b1) */

METHOD Curses_idcok(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	CursesIdcok(self ,b1 );

	KNH_RETURN_void(ctx, sfp);
}

/* Int Curses.idlok(self, Boolean b1) */

METHOD Curses_idlok(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	int ret = CursesIdlok(self ,b1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void Curses.immedok(self, Boolean b1) */

METHOD Curses_immedok(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	CursesImmedok(self ,b1 );

	KNH_RETURN_void(ctx, sfp);
}

/* Curses Curses.initscr() */

METHOD Curses_initscr(Ctx *ctx, knh_sfp_t* sfp)
{
	Curses *ret = CursesInitscr();

	KNH_RETURN(ctx, sfp, ret);
}

/* Int Curses.intrflush(self, Boolean b1) */

METHOD Curses_intrflush(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	int ret = CursesIntrflush(self ,b1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Boolean Curses.is_linetouched(self, Int i1) */

METHOD Curses_is_linetouched(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int ret = CursesIs_linetouched(self ,i1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.is_wintouched(self) */

METHOD Curses_is_wintouched(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_wintouched(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Int Curses.keypad(self, Boolean b1) */

METHOD Curses_keypad(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	int ret = CursesKeypad(self ,b1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.leaveok(self, Boolean b1) */

METHOD Curses_leaveok(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	int ret = CursesLeaveok(self ,b1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.meta(self, Boolean b1) */

METHOD Curses_meta(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	int ret = CursesMeta(self ,b1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvderwin(self, Int i1, Int i2) */

METHOD Curses_mvderwin(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesMvderwin(self ,i1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwaddch(self, Int i1, Int i2, unknown u3) */

METHOD Curses_mvwaddch(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesMvwaddch(self ,i1 ,i2 ,u3 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwaddchstr(self, Int i1, Int i2, unknown u3) */

METHOD Curses_mvwaddchstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesMvwaddchstr(self ,i1 ,i2 ,u3 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwaddnstr(self, Int i1, Int i2, String s3, Int i4) */

METHOD Curses_mvwaddnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	char *s3 = p_char(sfp[4]);
	int i4 = p_int(sfp[5]);
	int ret = CursesMvwaddnstr(self ,i1 ,i2 ,s3 ,i4 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwaddstr(self, Int i1, Int i2, String s3) */

METHOD Curses_mvwaddstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	char *s3 = p_char(sfp[4]);
	int ret = CursesMvwaddstr(self ,i1 ,i2 ,s3 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwdelch(self, Int i1, Int i2) */

METHOD Curses_mvwdelch(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesMvwdelch(self ,i1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwgetch(self, Int i1, Int i2) */

METHOD Curses_mvwgetch(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesMvwgetch(self ,i1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwgetnstr(self, Int i1, Int i2, String s3, Int i4) */

METHOD Curses_mvwgetnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	char *s3 = p_char(sfp[4]);
	int i4 = p_int(sfp[5]);
	int ret = CursesMvwgetnstr(self ,i1 ,i2 ,s3 ,i4 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwgetstr(self, Int i1, Int i2, String s3) */

METHOD Curses_mvwgetstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	char *s3 = p_char(sfp[4]);
	int ret = CursesMvwgetstr(self ,i1 ,i2 ,s3 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwhline(self, Int i1, Int i2, unknown u3, Int i4) */

METHOD Curses_mvwhline(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i4 = p_int(sfp[5]);
	int ret = CursesMvwhline(self ,i1 ,i2 ,u3 ,i4 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwin(self, Int i1, Int i2) */

METHOD Curses_mvwin(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesMvwin(self ,i1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwinchnstr(self, Int i1, Int i2, unknown u3, Int i4) */

METHOD Curses_mvwinchnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i4 = p_int(sfp[5]);
	int ret = CursesMvwinchnstr(self ,i1 ,i2 ,u3 ,i4 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwinchstr(self, Int i1, Int i2, unknown u3) */

METHOD Curses_mvwinchstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesMvwinchstr(self ,i1 ,i2 ,u3 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwinnstr(self, Int i1, Int i2, String s3, Int i4) */

METHOD Curses_mvwinnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	char *s3 = p_char(sfp[4]);
	int i4 = p_int(sfp[5]);
	int ret = CursesMvwinnstr(self ,i1 ,i2 ,s3 ,i4 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwinsch(self, Int i1, Int i2, unknown u3) */

METHOD Curses_mvwinsch(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesMvwinsch(self ,i1 ,i2 ,u3 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwinsnstr(self, Int i1, Int i2, String s3, Int i4) */

METHOD Curses_mvwinsnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	char *s3 = p_char(sfp[4]);
	int i4 = p_int(sfp[5]);
	int ret = CursesMvwinsnstr(self ,i1 ,i2 ,s3 ,i4 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwinsstr(self, Int i1, Int i2, String s3) */

METHOD Curses_mvwinsstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	char *s3 = p_char(sfp[4]);
	int ret = CursesMvwinsstr(self ,i1 ,i2 ,s3 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwinstr(self, Int i1, Int i2, String s3) */

METHOD Curses_mvwinstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	char *s3 = p_char(sfp[4]);
	int ret = CursesMvwinstr(self ,i1 ,i2 ,s3 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.mvwvline(self, Int i1, Int i2, unknown u3, Int i4) */

METHOD Curses_mvwvline(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i4 = p_int(sfp[5]);
	int ret = CursesMvwvline(self ,i1 ,i2 ,u3 ,i4 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Curses Curses.newpad(Int i0, Int i1) */

METHOD Curses_newpad(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	Curses *ret = CursesNewpad(i0 ,i1 );

	KNH_RETURN(ctx, sfp, ret);
}

/* Curses Curses.newwin(Int i0, Int i1, Int i2, Int i3) */

METHOD Curses_newwin(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	Curses *ret = CursesNewwin(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN(ctx, sfp, ret);
}

/* Int Curses.nodelay(self, Boolean b1) */

METHOD Curses_nodelay(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	int ret = CursesNodelay(self ,b1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.notimeout(self, Boolean b1) */

METHOD Curses_notimeout(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	int ret = CursesNotimeout(self ,b1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.overlay(unknown u0, Curses c1) */

METHOD Curses_overlay(Ctx *ctx, knh_sfp_t* sfp)
{
	Curses *c1 =(Curses*)((sfp[1].glue)->ptr);
	int ret = CursesOverlay(u0 ,c1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.overwrite(unknown u0, Curses c1) */

METHOD Curses_overwrite(Ctx *ctx, knh_sfp_t* sfp)
{
	Curses *c1 =(Curses*)((sfp[1].glue)->ptr);
	int ret = CursesOverwrite(u0 ,c1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.pechochar(self, unknown u1) */

METHOD Curses_pechochar(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesPechochar(self ,u1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.pnoutrefresh(unknown u0, Int i1, Int i2, Int i3, Int i4, Int i5, Int i6) */

METHOD Curses_pnoutrefresh(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	int i5 = p_int(sfp[6]);
	int i6 = p_int(sfp[7]);
	int ret = CursesPnoutrefresh(u0 ,i1 ,i2 ,i3 ,i4 ,i5 ,i6 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.prefresh(self, Int i1, Int i2, Int i3, Int i4, Int i5, Int i6) */

METHOD Curses_prefresh(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	int i5 = p_int(sfp[6]);
	int i6 = p_int(sfp[7]);
	int ret = CursesPrefresh(self ,i1 ,i2 ,i3 ,i4 ,i5 ,i6 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.putwin(self, unknown u1) */

METHOD Curses_putwin(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesPutwin(self ,u1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.redrawwin(self) */

METHOD Curses_redrawwin(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesRedrawwin(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.scroll(self) */

METHOD Curses_scroll(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesScroll(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.scrollok(self, Boolean b1) */

METHOD Curses_scrollok(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	int ret = CursesScrollok(self ,b1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Curses Curses.subpad(self, Int i1, Int i2, Int i3, Int i4) */

METHOD Curses_subpad(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	Curses *ret = CursesSubpad(self ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN(ctx, sfp, ret);
}

/* Curses Curses.subwin(self, Int i1, Int i2, Int i3, Int i4) */

METHOD Curses_subwin(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	Curses *ret = CursesSubwin(self ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN(ctx, sfp, ret);
}

/* Int Curses.syncok(self, Boolean b1) */

METHOD Curses_syncok(Ctx *ctx, knh_sfp_t* sfp)
{
	int b1 = p_int(sfp[2]);
	int ret = CursesSyncok(self ,b1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.touchline(self, Int i1, Int i2) */

METHOD Curses_touchline(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesTouchline(self ,i1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.touchwin(self) */

METHOD Curses_touchwin(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesTouchwin(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.untouchwin(self) */

METHOD Curses_untouchwin(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesUntouchwin(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.vw_printw(self, String s1, unknown u2) */

METHOD Curses_vw_printw(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int ret = CursesVw_printw(self ,s1 ,u2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.vwscanw(self, String s1, unknown u2) */

METHOD Curses_vwscanw(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int ret = CursesVwscanw(self ,s1 ,u2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.vw_scanw(self, String s1, unknown u2) */

METHOD Curses_vw_scanw(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int ret = CursesVw_scanw(self ,s1 ,u2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.waddch(self, unknown u1) */

METHOD Curses_waddch(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWaddch(self ,u1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.waddchnstr(self, unknown u1, Int i2) */

METHOD Curses_waddchnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i2 = p_int(sfp[3]);
	int ret = CursesWaddchnstr(self ,u1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.waddchstr(self, unknown u1) */

METHOD Curses_waddchstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWaddchstr(self ,u1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.waddnstr(self, String s1, Int i2) */

METHOD Curses_waddnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesWaddnstr(self ,s1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.waddstr(self, String s1) */

METHOD Curses_waddstr(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int ret = CursesWaddstr(self ,s1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wattron(self, Int i1) */

METHOD Curses_wattron(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int ret = CursesWattron(self ,i1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wattroff(self, Int i1) */

METHOD Curses_wattroff(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int ret = CursesWattroff(self ,i1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wattrset(self, Int i1) */

METHOD Curses_wattrset(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int ret = CursesWattrset(self ,i1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wattr_on(self, unknown u1, unknown u2) */

METHOD Curses_wattr_on(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWattr_on(self ,u1 ,u2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wattr_off(self, unknown u1, unknown u2) */

METHOD Curses_wattr_off(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWattr_off(self ,u1 ,u2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wattr_set(self, unknown u1, unknown u2, unknown u3) */

METHOD Curses_wattr_set(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWattr_set(self ,u1 ,u2 ,u3 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wbkgd(self, unknown u1) */

METHOD Curses_wbkgd(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWbkgd(self ,u1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void Curses.wbkgdset(self, unknown u1) */

METHOD Curses_wbkgdset(Ctx *ctx, knh_sfp_t* sfp)
{
	CursesWbkgdset(self ,u1 );

	KNH_RETURN_void(ctx, sfp);
}

/* Int Curses.wborder(self, unknown u1, unknown u2, unknown u3, unknown u4, unknown u5, unknown u6, unknown u7, unknown u8) */

METHOD Curses_wborder(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWborder(self ,u1 ,u2 ,u3 ,u4 ,u5 ,u6 ,u7 ,u8 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wchgat(self, Int i1, unknown u2, unknown u3, unknown u4) */

METHOD Curses_wchgat(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int ret = CursesWchgat(self ,i1 ,u2 ,u3 ,u4 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wclear(self) */

METHOD Curses_wclear(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWclear(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wclrtobot(self) */

METHOD Curses_wclrtobot(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWclrtobot(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wclrtoeol(self) */

METHOD Curses_wclrtoeol(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWclrtoeol(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void Curses.wcursyncup(self) */

METHOD Curses_wcursyncup(Ctx *ctx, knh_sfp_t* sfp)
{
	CursesWcursyncup(self );

	KNH_RETURN_void(ctx, sfp);
}

/* Int Curses.wdelch(self) */

METHOD Curses_wdelch(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWdelch(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wdeleteln(self) */

METHOD Curses_wdeleteln(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWdeleteln(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wechochar(self, unknown u1) */

METHOD Curses_wechochar(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWechochar(self ,u1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.werase(self) */

METHOD Curses_werase(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWerase(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wgetch(self) */

METHOD Curses_wgetch(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWgetch(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wgetnstr(self, String s1, Int i2) */

METHOD Curses_wgetnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesWgetnstr(self ,s1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wgetstr(self, String s1) */

METHOD Curses_wgetstr(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int ret = CursesWgetstr(self ,s1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.whline(self, unknown u1, Int i2) */

METHOD Curses_whline(Ctx *ctx, knh_sfp_t* sfp)
{
	int i2 = p_int(sfp[3]);
	int ret = CursesWhline(self ,u1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.winchnstr(self, unknown u1, Int i2) */

METHOD Curses_winchnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int i2 = p_int(sfp[3]);
	int ret = CursesWinchnstr(self ,u1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.winchstr(self, unknown u1) */

METHOD Curses_winchstr(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWinchstr(self ,u1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.winnstr(self, String s1, Int i2) */

METHOD Curses_winnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesWinnstr(self ,s1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.winsch(self, unknown u1) */

METHOD Curses_winsch(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWinsch(self ,u1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.winsdelln(self, Int i1) */

METHOD Curses_winsdelln(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int ret = CursesWinsdelln(self ,i1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.winsertln(self) */

METHOD Curses_winsertln(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWinsertln(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.winsnstr(self, String s1, Int i2) */

METHOD Curses_winsnstr(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesWinsnstr(self ,s1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.winsstr(self, String s1) */

METHOD Curses_winsstr(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int ret = CursesWinsstr(self ,s1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.winstr(self, String s1) */

METHOD Curses_winstr(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[2]);
	int ret = CursesWinstr(self ,s1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wmove(self, Int i1, Int i2) */

METHOD Curses_wmove(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesWmove(self ,i1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wnoutrefresh(self) */

METHOD Curses_wnoutrefresh(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWnoutrefresh(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wredrawln(self, Int i1, Int i2) */

METHOD Curses_wredrawln(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesWredrawln(self ,i1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wrefresh(self) */

METHOD Curses_wrefresh(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWrefresh(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wscrl(self, Int i1) */

METHOD Curses_wscrl(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int ret = CursesWscrl(self ,i1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wsetscrreg(self, Int i1, Int i2) */

METHOD Curses_wsetscrreg(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesWsetscrreg(self ,i1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wstandout(self) */

METHOD Curses_wstandout(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWstandout(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wstandend(self) */

METHOD Curses_wstandend(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesWstandend(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void Curses.wsyncdown(self) */

METHOD Curses_wsyncdown(Ctx *ctx, knh_sfp_t* sfp)
{
	CursesWsyncdown(self );

	KNH_RETURN_void(ctx, sfp);
}

/* void Curses.wsyncup(self) */

METHOD Curses_wsyncup(Ctx *ctx, knh_sfp_t* sfp)
{
	CursesWsyncup(self );

	KNH_RETURN_void(ctx, sfp);
}

/* void Curses.wtimeout(self, Int i1) */

METHOD Curses_wtimeout(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	CursesWtimeout(self ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* Int Curses.wtouchln(self, Int i1, Int i2, Int i3) */

METHOD Curses_wtouchln(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int ret = CursesWtouchln(self ,i1 ,i2 ,i3 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wvline(self, unknown u1, Int i2) */

METHOD Curses_wvline(Ctx *ctx, knh_sfp_t* sfp)
{
	int i2 = p_int(sfp[3]);
	int ret = CursesWvline(self ,u1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.getattrs(self) */

METHOD Curses_getattrs(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesGetattrs(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.getcurx(self) */

METHOD Curses_getcurx(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesGetcurx(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.getcury(self) */

METHOD Curses_getcury(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesGetcury(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.getbegx(self) */

METHOD Curses_getbegx(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesGetbegx(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.getbegy(self) */

METHOD Curses_getbegy(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesGetbegy(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.getmaxx(self) */

METHOD Curses_getmaxx(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesGetmaxx(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.getmaxy(self) */

METHOD Curses_getmaxy(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesGetmaxy(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.getparx(self) */

METHOD Curses_getparx(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesGetparx(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.getpary(self) */

METHOD Curses_getpary(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesGetpary(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int Curses.wresize(self, Int i1, Int i2) */

METHOD Curses_wresize(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesWresize(self ,i1 ,i2 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Curses Curses.wgetparent(self) */

METHOD Curses_wgetparent(Ctx *ctx, knh_sfp_t* sfp)
{
	Curses *ret = CursesWgetparent(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* Boolean Curses.is_cleared(self) */

METHOD Curses_is_cleared(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_cleared(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.is_idcok(self) */

METHOD Curses_is_idcok(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_idcok(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.is_idlok(self) */

METHOD Curses_is_idlok(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_idlok(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.is_immedok(self) */

METHOD Curses_is_immedok(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_immedok(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.is_keypad(self) */

METHOD Curses_is_keypad(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_keypad(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.is_leaveok(self) */

METHOD Curses_is_leaveok(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_leaveok(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.is_nodelay(self) */

METHOD Curses_is_nodelay(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_nodelay(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.is_notimeout(self) */

METHOD Curses_is_notimeout(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_notimeout(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.is_scrollok(self) */

METHOD Curses_is_scrollok(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_scrollok(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.is_syncok(self) */

METHOD Curses_is_syncok(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = CursesIs_syncok(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean Curses.wenclose(self, Int i1, Int i2) */

METHOD Curses_wenclose(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int ret = CursesWenclose(self ,i1 ,i2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* void Curses._tracedump(String s0, Curses c1) */

METHOD Curses__tracedump(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s0 = p_char(sfp[1]);
	Curses *c1 =(Curses*)((sfp[1].glue)->ptr);
	Curses_tracedump(s0 ,c1 );

	KNH_RETURN_void(ctx, sfp);
}


METHOD MagickWand_new(Ctx *ctx, knh_sfp_t* sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  MagickWandGenesis();
  glue->ptr = (void *)NewMagickWand();
  KNH_RETURN(ctx, sfp, sfp[0].o);
}
