# .zshrc

export ZSH="/root/.oh-my-zsh"

ZSH_THEME="agnoster"

plugins=(
  git
  z
  brew
  web-search
  common-aliases
  node
  npm
  rand-quote
  sudo
  colored-man-pages
  colorize
  cp
  zsh-syntax-highlighting
  zsh-autosuggestions
  macos
  copyfile
  history
  dirhistory
)

source $ZSH/oh-my-zsh.sh
