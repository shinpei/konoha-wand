
InputStream is = new InputStream("definefile");
OutputStream os = new OutputStream("out.file", "w");
foreach (String s from is) {
  array = s.split(",");
  foreach (line in array) {
    os << "{\"GL." <<  line.trim() << "\", " << line.trim() <<  "}," << EOL;
  }
}

os.close()


