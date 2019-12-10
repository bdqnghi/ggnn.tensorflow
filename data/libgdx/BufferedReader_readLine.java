public String readLine() throws IOException {
    StringBuilder sb = new StringBuilder();
    while (true) {
        if (position >= limit) {
            fill();
        }
        if (position >= limit) {
            return sb.length() == 0 ? null : sb.toString();
        }
        for (int i = position; i < limit; ++i) {
            if (buffer[i] == '\r') {
                sb.append(buffer, position, i - position);
                position = i + 1;
                if (i + 1 < limit) {
                    if (buffer[i + 1] == '\n') {
                        position = i + 2;
                    }
                } else {
                    fill();
                    if (buffer[position] == '\n') {
                        position += 1;
                    }
                }
                return sb.toString();
            } else if (buffer[i] == '\n') {
                sb.append(buffer, position, i - position);
                position = i + 1;
                return sb.toString();
            }
        }
        sb.append(buffer, position, limit - position);
        position = limit;
    }
}
