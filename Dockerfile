FROM alpine:latest

RUN echo "ipv6" >> /etc/modules

RUN apk update && apk upgrade
RUN apk add --no-cache clang clang-dev alpine-sdk zsh
RUN apk add --update --no-cache cmake
RUN sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"

RUN ln -sf /usr/bin/clang /usr/bin/cc
RUN ln -sf /usr/bin/clang++ /usr/bin/c++
WORKDIR app