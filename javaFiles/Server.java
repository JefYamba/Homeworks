import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Arrays;
import java.util.Objects;

public class Server {
    public static void main(String[] args) throws IOException, ClassNotFoundException {

        ServerSocket serverSocket = new ServerSocket(1234);
        System.out.println("Server en attente de connexion ...");
        Socket socket = serverSocket.accept();

        ObjectOutputStream ous = new ObjectOutputStream(socket.getOutputStream());
        ObjectInputStream ois = new ObjectInputStream(socket.getInputStream());

        Packet receivPacket = (Packet) ois.readObject();
        System.out.println(receivPacket.message);

        if (Objects.equals(receivPacket.message, "Hello !")){
            Packet[] packets= new Packet[]{
                    new Packet("Hi! - From the server"),
                    new Packet("Premier objet"),
                    new Packet("Deuxieme objet"),
                    new Packet("Troisieme objet"),
                    new Packet("Quatrieme objet"),
            };

            ous.writeObject(packets);
        }

        socket.close();
        serverSocket.close();
    }
}
