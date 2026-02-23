
import { useState } from 'react'

function App() {
  const [count, setCount] = useState(0);

  function increaseNumber() {
    setCount(count + 1);
  }

  return (
    <>
      <p>counter: {count}</p>
      <button onClick={increaseNumber} style={{ padding: '10px', fontSize: '16px' }}>Increment</button>
    </>
  );
}

export default App;