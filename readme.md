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

Terminal, inactive statusline, folds, visual selection, linting (ALE), NERDTree

![](https://github.com/ycm/enough-colors/blob/master/gallery/darkmode_transp.png)

## Todos

- [ ] Fix cursor
- [ ] Fix matching parens
