import java.net.InetSocketAddress;
import java.nio.channels.ServerSocketChannel;

/**
 * Project: Distributed Key-Value Store
 * Status: Boilerplate v1.0
 */
public class Server {
    public static void main(String[] args) throws Exception {
        System.out.println("Initializing Distributed-KV Node...");
        
        ServerSocketChannel serverChannel = ServerSocketChannel.open();
        serverChannel.bind(new InetSocketAddress(8080));
        serverChannel.configureBlocking(false);

        System.out.println("Node listening on port 8080. Ready for consensus.");
        // TODO: Implement Selector loop
    }
}
