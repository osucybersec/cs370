# CS370 - Introduction to Security

## Environment Setup

> Run these commands on your host machine to set up the environment.

1. [Install Docker](https://docs.docker.com/get-docker/).

2. Clone this repository to your local machine.
```
git clone https://github.com/osucybersec/cs370.git && cd cs370
```

3. Build the Docker image.
```
docker build -t cs370_kali .
```

4. Run the Docker image.
```
docker run -it --rm cs370_kali
```

5. Run the Docker image with the `cs370` directory mounted.
```
docker run -it --rm -v ${PWD}:/cs370 cs370_kali
```
> you should see all the contents of this folder/repo at `/cs370` in the container. The folder is read-write on both host and the container.

> on a Windows host refer to this [stackoverflow answer](https://stackoverflow.com/a/41489151/2558137) if you face any issues.

6. Get the latest set of challenge files.
```
git pull
```
