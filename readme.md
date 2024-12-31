# enough-colors

sparse syntax highlighting with ![vim-colortemplate](https://github.com/lifepillar/vim-colortemplate)

preview (with transparency enabled)

![img-splash](https://github.com/ycm/enough-colors/blob/master/gallery/splash.png)

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

![img-darkmode-demo](https://github.com/ycm/enough-colors/blob/master/gallery/darkmode_demo.png)

![img-lightmode-demo](https://github.com/ycm/enough-colors/blob/master/gallery/lightmode_demo.png)

Dark mode palette

![img-darkmode-palette](https://github.com/ycm/enough-colors/blob/master/gallery/darkmode_palette.png)

```
#1e1e1e #2d2323 #232d23 #2d2d23 #23232d #2d232d #232828 #646464
#282828 #b45a5a #6eb46e #b48c5a #82b4dc #b46eb4 #64b4a0 #bebebe
```

Light mode palette

![img-lightmode-palette](https://github.com/ycm/enough-colors/blob/master/gallery/lightmode_palette.png)

```
#282828 #c82828 #288c1e #8c8200 #0050b4 #783caa #508c78 #f0f0f0
#787878 #fab4b4 #c8f0c8 #fafab4 #c8dcf0 #faebfa #d2e6f0 #ffffff
```
