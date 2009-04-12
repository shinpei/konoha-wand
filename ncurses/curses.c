#include <konoha.h>
#include <ncurses.h>


METHOD Curses_new(Ctx *ctx, knh_sfp_t *sfp)
{
  WINDOW *win;
  knh_Glue_t *glue = sfp[0].glue;
  
  win = newwin(p_int(sfp[1]), p_int(sfp[2]),
			   p_int(sfp[3]), p_int(sfp[4]));
  glue->ptr = (void*)win;
  KNH_RETURN(ctx, sfp, sfp[0].o);
}

METHOD Curses_initscr(Ctx *ctx, knh_sfp_t *sfp)
{
  initscr();
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_noecho(Ctx *ctx, knh_sfp_t *sfp)
{
  cbreak();
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_cbreak(Ctx *ctx, knh_sfp_t *sfp)
{
  cbreak();
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_clear(Ctx *ctx, knh_sfp_t *sfp)
{
  clear();
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_keypad(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  keypad(win, p_int(sfp[1]));
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_mvprintw(Ctx *ctx, knh_sfp_t *sfp)
{
  mvprintw(0,0, "hello");
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_refresh(Ctx *ctx, knh_sfp_t *sfp)
{
  refresh();
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_box(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  box(win, p_int(sfp[1]), p_int(sfp[2]));
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_wattron(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  wattron(win, p_int(sfp[1]));
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_wattroff(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  wattroff(win, p_int(sfp[1]));
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_endwin(Ctx *ctx, knh_sfp_t *sfp)
{
  endwin();
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_clrtoeol(Ctx *ctx, knh_sfp_t *sfp)
{
  clrtoeol();
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_wrefresh(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  wrefresh(win);
  KNH_RETURN_void(ctx, sfp);
}

METHOD Curses_mvwprintw(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  Array *a = (Array*)sfp[4].o;
  
  mvwprintw(win, p_int(sfp[1]), p_int(sfp[2]),
			p_char(sfp[3]),
			(void *)knh_Array_n(a, 0));
  KNH_RETURN_void(ctx, sfp);
}

static
knh_IntConstData_t IntConstData[] = {
  {"curses.Curses.A_REVERSE", A_REVERSE},
  {NULL},
};

KNHAPI(int) init(Ctx *ctx)
{
  KNH_NOTICE(ctx, "loading curses...");
  konoha_loadIntConstData(ctx, IntConstData);
  return 1;
}
