FROM kalilinux/kali-last-release

ENV DEBIAN_FRONTEND noninteractive

RUN apt-get update && \
    apt-get -y install kali-linux-headless && \
    rm -rf /var/lib/apt/lists/*

# RUN git clone https://github.com/longld/peda.git ~/peda && \
    # echo "source ~/peda/peda.py" >> ~/.gdbinit

CMD ["/bin/bash"]
