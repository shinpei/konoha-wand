(setq inhibit-startup-message t)
(if window-system(progn
(tool-bar-mode nil)))

(when (eq window-system 'mac)
(add-hook 'window-setup-hook
(lambda ()
(set-frame-parameter nil 'fullscreen fullbath))))

(if window-system (progn
  (add-to-list 'default-frame-alist '(foreground-color . "snow"))
  (add-to-list 'default-frame-alist '(background-color . "#444444"))
  (set-face-foreground 'modeline "white")
  (set-face-background 'modeline "firebrick")
  (set-face-background 'region "RoyalBlue4")

))

(transient-mark-mode t)

(global-set-key "\C-x\C-i" 'indent-region)
(global-set-key "\C-x\C-a" 'align)
(global-set-key "\C-xp" '(other-window -1))
(setq load-path (cons "/home/tsunade/.emacs.d" load-path))
(autoload 'gtags-mode "gtags" "" t)
(setq c-mode-hook '(lambda () (gtags-mode 1)))

(global-set-key "\M-t" 'gtags-find-tag)
(global-set-key "\M-r" 'gtags-find-rtag)
(global-set-key "\M-s" 'gtags-find-symbol)
(global-set-key "\M-p" 'gtags-find-pattern)
(global-set-key "\M-f" 'gtags-find-file)
(global-set-key [?\C-,] 'gtags-pop-stack)
(custom-set-variables
'(inhibit-startup-screen t))
(custom-set-faces
)
(add-to-list 'default-frame-alist '(font . "7x14"))


