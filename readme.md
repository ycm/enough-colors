# enough-colors

Sparse highlighting

![](https://github.com/ycm/enough-colors/blob/master/gallery/splash.png)


## Setup

Inside `.vimrc`:

```vim
set termguicolors
set background=light " or dark
let g:enough_colors_opt_transp_bg=1 " optional, for transparency
colo enough
```

Other configs:

```vim
let g:NERDTreeStatusline = '%#Normal#'
```

## Gallery

Terminal, inactive statusline, folds, visual selection, NERDTree

![](https://github.com/ycm/enough-colors/blob/master/gallery/darkmode_transp.png)

Dark mode palette

![](https://github.com/ycm/enough-colors/blob/master/gallery/darkmode_palette.png)

```
#1e1e1e #2d2323 #232d23 #2d2d23 #23232d #2d232d #232828 #282828
#646464 #b45a5a #6eb46e #b48c5a #82b4dc #b46eb4 #64b4a0 #bebebe
```

## Todos

- [ ] Fix cursor
- [ ] Fix matching parens
- [ ] Fix terminal colors
- [ ] Make light mode
