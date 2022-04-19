# CS370 - Introduction to Security

## Environment Setup

1. [Install Docker](https://docs.docker.com/get-docker/).

2. Clone this repository to your local machine.
```
git clone https://github.com/osucybersec/cs370.git && cd cs370
```

3. Build the Docker image.
```
docker build -t cs370 .
```

4. Run the Docker image.
```
docker run -it --rm cs370
```

5. Run the Docker image with volume mapping.
```
docker run -it -rm -v $PWD:/cs370 cs370
```
