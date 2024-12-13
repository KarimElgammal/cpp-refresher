FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    googletest \
    libgtest-dev \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /code

RUN useradd -m developer && \
    chown -R developer:developer /code

USER developer

CMD ["/bin/bash"]