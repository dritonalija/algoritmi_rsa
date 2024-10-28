# Use an official GCC image
FROM gcc:latest

# Set the working directory in the container
WORKDIR /app

# Copy the C++ file into the container
COPY rsa_encryption.cpp .

# Compile the C++ program
RUN g++ -o rsa_encryption rsa_encryption.cpp

# Set the command to run the executable
CMD ["./rsa_encryption"]
